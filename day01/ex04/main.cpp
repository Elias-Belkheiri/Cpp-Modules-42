/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 23:23:28 by elias             #+#    #+#             */
/*   Updated: 2023/04/07 17:35:31 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <string.h>
#include <iostream>

void replace(std::string &line, char *s1, char *s2)
{
    size_t pos = line.find(s1);
    while (strlen(s1) && strlen(s2) && pos != std::string::npos)
    {
        line.erase(pos, strlen(s1));
        line.insert(pos, s2);
        pos = line.find(s1);
    }
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
        return 1;
    }
    std::ifstream infile;
    std::ofstream outfile;
    std::string   store;
    std::string   a1;
    std::string   a2;

    infile.open(argv[1]);
    a1 = argv[1];
    a2 = ".replace";
    if (!infile.is_open() || infile.eof())
    {
        std::cerr << "Invalid file" << std::endl;
        return (1);
    }
    getline(infile, store, '\0');
    if (store.empty())
    {
        std::cerr << "Empty file" << std::endl;
        return (1);
    }
    outfile.open((a1 + a2).c_str());
    replace(store, argv[2], argv[3]);
    outfile << store;
    outfile.close();
    infile.close();
}