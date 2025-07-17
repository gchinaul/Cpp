/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:16:49 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/06 17:22:30 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "\033[90mConstructor for " << this->_name << " Zombie called\033[0m" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "\033[90mConstructor for " << this->_name << "called\033[0m" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ.." << std::endl;
}
