/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebelkhei <ebelkhei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 23:23:28 by elias             #+#    #+#             */
/*   Updated: 2023/04/05 00:32:44 by ebelkhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void replace(std::string &line, char *s1, char *s2)
{
    size_t pos = line.find(s1);
    while (strlen(s1) && pos != std::string::npos)
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
    outfile.open((a1 + a2).c_str());
    if (!infile.is_open())
    {
        std::cerr << "Invalid filename" << std::endl;
        return (1);
    }
    getline(infile, store, '\0');
    replace(store, argv[2], argv[3]);
    outfile << store;
}