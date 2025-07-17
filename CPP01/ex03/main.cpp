/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 20:12:27 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/07 18:51:39 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

int main()
{
    {
        Weapon Ak47 = Weapon("take Ak47");

        HumanA Luckyluck("Luckyluck", Ak47);
        Luckyluck.attack();
        Ak47.setType("some other type of Ak47");
        Luckyluck.attack();
    }
    std::cout << "--------------BABABABA-----------" << std::endl;
    {
        Weapon Bombe = Weapon("take Bomb");

        HumanB gabriel("Gariel");
        gabriel.setWeapon(Bombe);
        gabriel.attack();
        Bombe.setType("Some other type of Bombe");
        gabriel.attack();
    }
    {
        Weapon Char = Weapon("take Char");

        HumanB tac("TacoTac");
        tac.attack();
        tac.setWeapon(Char);
        tac.attack();
    }
    return (0);
}
