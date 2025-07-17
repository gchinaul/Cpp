/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:23:32 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/06 17:29:42 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    std::cout << "> Creat zombie on stack" << std::endl;
    {
        Zombie new_zombie1 = Zombie("wazaaaaa");
        new_zombie1.announce();
    }
    std::cout << "\n--------------POLICE----------------\n"
              << std::endl;

    std::cout << "> Creat zombie on heap with newzomb" << std::endl;
    {
        Zombie *new_zombie2 = newZombie("wazaaaaaaaaaaaaaaaaa");
        new_zombie2->announce();
        delete new_zombie2;
    }
    std::cout << "\n--------------POLICE----------------\n"
              << std::endl;

    std::cout << "Creat third zombie with fct randomChump" << std::endl;
    randomChump("wazazaza");

    return 0;
}
