/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 00:47:50 by ebelkhei          #+#    #+#             */
/*   Updated: 2023/04/04 23:35:09 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() {}

Account::Account( int initial_deposit )
{
    static int idx;

    this->_accountIndex = idx++;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";" << "closed" << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;

}

void Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";" << "deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_totalAmount += deposit;
    this->_nbDeposits++;
    this->_totalNbDeposits++;
    std::cout << "amount:" << this->_amount << ";" << "nb_deposits:" << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "withdrawal:";
    if (this->_amount - withdrawal  < 0)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals++;
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    std::cout << withdrawal << ";";
    std::cout << "amount:" << this->_amount << ";" << "nb_withdrawals:" << _nbDeposits << std::endl;
    return true;
}

void    Account::_displayTimestamp()
{
    static time_t time_now = time(0);
    static tm *t = localtime(&time_now);
 
    std::cout << "[" << 1900 + t->tm_year;
    if (t->tm_mon < 10)
        std::cout << '0';
    std::cout << t->tm_mon + 1;
    if (t->tm_mday < 10)
        std::cout << '0';
    std::cout << t->tm_mday << "_";
    if (t->tm_hour < 10)
        std::cout << '0';
    std::cout << t->tm_hour;
    if (t->tm_min < 10)
        std::cout << '0';
    std::cout << t->tm_min;
    if (t->tm_sec < 10)
        std::cout << '0';
    std::cout << t->tm_sec << "] ";
}