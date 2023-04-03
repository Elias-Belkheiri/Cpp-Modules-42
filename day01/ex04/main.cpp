/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elias <elias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 23:23:28 by elias             #+#    #+#             */
/*   Updated: 2023/04/01 01:42:31 by elias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string replace(std::string line, char *s1, char *s2)
{
    // std::string result;
    // while (strstr(line.c_str(), s1))
    // {
    //     result += line.substr(0, line.length() - strlen(s1));
    //     result += s2;
    //     line = line.substr(strlen(s1), line.length());
    //     line = result + line;
    // }
    // return (line);
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
    outfile.open((a1 + a2).c_str()); // check leaks
    if (!infile.is_open())
    {
        std::cerr << "Invalid filename" << std::endl;
        return (1);
    }
    while (!infile.eof())
    {
        getline(infile, store);
        std::cout << replace(store, argv[2], argv[3]) << std::endl;
    }
}