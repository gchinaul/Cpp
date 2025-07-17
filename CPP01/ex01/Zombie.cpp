/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:52:12 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/07 20:05:02 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "\033[90m Constructor zombie call\033[0m" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "\033[90m Destructor zombie call\033[0m" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiiiiinnnnzzzZ.." << std::endl;
}

std::string Zombie::getName(void)
{
    return (this->_name);
}

void Zombie::setName(std::string new_name)
{
    this->_name = new_name;
}
