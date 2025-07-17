/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:56:00 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/07 19:21:55 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/*
 * while(....) for s1 found, found = position
 * start again with found += replace_len
 *---------------------------------
 * while (...) entire line ifs and put
 *---------------------------------
 */

std::string replace_word(const std::string &to_search, const std::string &to_replace, const std::string &base)
{
    std::string final_string = base;
    size_t found = 0;
    size_t search_len = to_search.length();
    size_t replace_len = to_replace.length();

    while ((found = final_string.find(to_search, found)) != std::string::npos)
    {
        final_string = final_string.substr(0, found) + to_replace + final_string.substr(found + search_len);
        found += replace_len;
    }

    return final_string;
}

void lineboss(std::ifstream &ifs, std::ofstream &ofs, std::string s1, std::string s2)
{
    std::string temp;

    while (getline(ifs, temp))
    {
        temp = replace_word(s1, s2, temp);
        ofs << temp << std::endl;
    }
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    if (s1.empty())
    {
        std::cerr << "Error s1 cannot empty" << std::endl;
        return 1;
    }

    std::ifstream ifs(filename.c_str());
    if (!ifs)
    {
        std::cerr << "Error cannot open input file" << std::endl;
        return 1;
    }

    std::ofstream ofs((filename + ".replace").c_str());
    if (!ofs)
    {
        std::cerr << " Error cannot create output file" << std::endl;
        return 1;
    }

    lineboss(ifs, ofs, s1, s2);

    ifs.close();
    ofs.close();
    return 0;
}
