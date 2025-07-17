/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:37:02 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/07 18:42:33 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    std::cout << "\033[90m COnstructor HumanB call\033[0m" << std::endl;
    this->_weapon = 0;
};

HumanB::~HumanB()
{
    std::cout << "\033[90m Destructor HumanB call\033[0m" << std::endl;
}

void HumanB::attack()
{
    if (this->_weapon)
        std::cout << this->_name << "Attacks" << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << "tried attack without success" << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->_weapon = &Weapon;
}
