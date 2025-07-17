/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:05:13 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/06 18:07:16 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;

    Zombie *horde = new Zombie[N];
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}
