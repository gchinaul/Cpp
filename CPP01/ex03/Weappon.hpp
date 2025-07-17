/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weappon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:10:10 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/07 20:06:46 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPPON_HPP
#define WEAPPON_HPP
#include <string>

class Weapon
{
private:
    std::string _weapon;

public:
    Weapon(std::string weaponType);
    ~Weapon();
    std::string const &getType();
    void setType(std::string weaponType);
};

#endif