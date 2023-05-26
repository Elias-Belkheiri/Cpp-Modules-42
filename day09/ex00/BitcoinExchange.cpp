/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 16:54:44 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/05/26 11:57:37 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Btc::Btc() {}

Btc::Btc(const Btc &other) { *this = other;}

Btc::~Btc() {}

Btc &Btc::operator=(const Btc &other)
{
    (void)other;
    return (*this);
}

const char* Btc::ParseError::what() const throw()
{
    return ("Parse Error");
}

int checkDate(std::string date)
{
    int year, month, day;

    if (std::count(date.begin(), date.end(), '-') != 2 || date.length() != 10)
    {
        std::cout << "len: " << date.length() << std::endl;
        return (0);
    }
    for (size_t i = 0; i < date.length(); i++)
    {
        if (!std::isdigit(date[i]) && date[i] != '-')
            return (0);
    }
    year = std::stoi(date.substr(0, date.find('-')));
    month = std::stoi(date.substr(date.find('-') + 1, date.find('-')));
    day = std::stoi(date.substr(date.find_last_of('-') + 1));
    if (year < 2009 || year > 2022 || month < 1 || month > 12 || day < 1 || day > 31)
        return (0);
    // Leap year
    if (year % 4 == 0 && month == 2 && day > 29)
        return (0);
    if (year % 4 && month == 2 && day > 28)
        return (0);
    // Months with 30 days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return (0);
    return (1);
}

int checkValue(std::string value)
{
    int p = 0;
    
    for (size_t i = 0; i < value.length(); i++)
    {
        if (value[i] == '.' && p == 0)
            p++;
        else if (!std::isdigit(value[i]))
            return (0);
    }
    return (1);
}

int checkInput(std::string date, std::string value)
{
    int year, month, day;
    double _value;
    
    if (!checkDate(date))
        return (BAD_DATE);
    year = std::stoi(date.substr(0, date.find('-')));
    month = std::stoi(date.substr(date.find('-') + 1, date.find('-')));
    day = std::stoi(date.substr(date.find_last_of('-') + 1));
    _value = std::stod(value);
    if (year == 2009 && month == 1 && day < 2)
        return (BAD_DATE);
    if (year == 2022 && month > 3)
        return (BAD_DATE);
    if (year == 2022 && month == 3 && day > 29)
        return (BAD_DATE);
    if (!checkValue(value))
        return (BAD_VALUE);
    if (_value < 0)
        return (SMALL_NUM);
    if (_value > 1000)
        return (LARGE_NUM);
    return (GOOD);
}


void Btc::readDb(std::ifstream &db)
{
    std::string line;
    std::string date;
    std::string price;

    while (!db.eof() && std::getline(db, line))
    {
        if (line == "date,exchange_rate" && this->db.empty())
            continue;
        if (std::count(line.begin(), line.end(), ',') != 1)
            throw ParseError();
        date = line.substr(0, line.find(','));
        price = line.substr(line.find(',') + 1);
        if (!checkDate(date) || !checkValue(price))
            throw ParseError();
        this->db[date] = std::stod(price);
    }
}

double getPrice(std::map<std::string, double> &db, std::string _date)
{
    std::string date;

    date = db.lower_bound(_date)->first;
    if (date == _date)
        return (db[date]);
    return (--(db.lower_bound(_date))->second);
}

void Btc::readInput(std::ifstream &input)
{
    std::string line;
    std::string date;
    std::string price;
    int i = 0;

    while (!input.eof() && std::getline(input, line))
    {
        if (line == "date | value" && !i)
        {
            i++;
            continue;
        }
        if(std::count(line.begin(), line.end(), '|') != 1)
            throw ParseError();
        date = line.substr(0, line.find('|'));
        price = line.substr(line.find('|') + 1);
        std::remove(date.begin(), date.end(), ' ');
        std::remove(price.begin(), price.end(), ' ');
        switch (checkInput(date, price))
        {
            case (BAD_DATE):
                std::cout << "Error: bad input => " << date << std::endl;
                break;
            case (BAD_VALUE):
                std::cout << "Error: bad input => " << price << std::endl;
                break;
            case (SMALL_NUM):
                std::cout << "Error: not a positive number" << std::endl;
                break;
            case (LARGE_NUM):
                std::cout << "Error: too large number" << std::endl;
                break;
            case (GOOD):
                std::cout << date << " => " << price << " = " << getPrice(this->db, date) * std::stod(price) << std::endl;
        }
    }
}

void Btc::printMap()
{
    std::map<std::string, double>::iterator it = this->db.begin();
    for (; it != this->db.end(); it++)
        std::cout << it->first << ": " << it->second << std::endl;
}