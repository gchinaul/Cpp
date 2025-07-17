/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:06:04 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/07 20:07:15 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weappon.hpp"
#include <string>
#include <iostream>

Weapon::Weapon(std::string weaponType) : _weapon(weaponType)
{
    std::cout << "\033[90m Constructor Weapon \033[0m" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "\033[90m Destructor Weapon \033[0m" << std::endl;
}

std::string const &Weapon::getType()
{
    return (this->_weapon);
}

void Weapon::setType(std::string weaponType)
{
    this->_weapon = weaponType;
}
