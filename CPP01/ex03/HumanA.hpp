/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:33:44 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/07 20:07:02 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weappon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon &_weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();
};

#endif
