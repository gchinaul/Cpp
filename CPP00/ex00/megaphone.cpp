/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mega.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 19:37:12 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/04 20:02:39 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

/*
 * first if no argument
 * second the arg but no av[0] because name prog
 * conv
 * the caract one by one
 * conv TOUPPER and see you baby ! (static_cast<char>() for good job)
 */
int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
        std::string str = av[i];
        for (size_t j = 0; j < str.length(); j++)
        {
            std::cout << static_cast<char>(std::toupper(str[j]));
        }
    }
    std::cout << std::endl;
    return 0;
}
