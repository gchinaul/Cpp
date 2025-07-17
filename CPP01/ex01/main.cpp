/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:58:43 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/06 18:04:29 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie *zombieHorde(int N, std::string name);

int main()
{
    int i = 0;
    int n = 10;
    std::cout << "Creat " << n << "zombie.." << std::endl;
    Zombie *group;
    group = zombieHorde(n, "Les meilleurs cest la horde");

    std::cout << "\n--------------POLICE----------------\n"
              << std::endl;
    Zombie *current = group;

    std::cout << "Making announce" << std::endl;
    while (i < n)
    {
        std::cout << i + 1 << " ";
        current->announce();
        i++;
        current++;
    }
    i = 0;

    std::cout << "\n--------------POLICE----------------\n"
              << std::endl;

    std::cout << "killing the zombie ! goo job" << std::endl;
    delete[] group;
}
