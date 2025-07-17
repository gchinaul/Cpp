/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:27:46 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/06 19:33:04 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "Weappon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    std::cout << "\033[90m Constructor HumanA call\033[0m" << std::endl;
};

HumanA::~HumanA()
{
    std::cout << "\033[90m Destructor HumanA call\033[0m" << std::endl;
}

void HumanA::attack()
{
    std::cout << this->_name << " attacks" << this->_weapon.getType() << std::endl;
}
