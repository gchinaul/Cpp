/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 19:42:29 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/07 20:30:41 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && levels[i] != av[1])
        i++;

    Harl harl;

    switch (i)
    {
    case 0:
        std::cout << " [DEBUG] " << std::endl;
        harl.complain("DEBUG");
        break;
    case 1:
        std::cout << " [INFO] " << std::endl;
        harl.complain("INFO");
        break;
    case 2:
        std::cout << " [WARNING] " << std::endl;
        harl.complain("WARNING");
        break;
    case 3:
        std::cout << " [ERROR] " << std::endl;
        harl.complain("ERROR");
        break;
    default:
        std::cout << "[complaining insignificant pbs ]" << std::endl;
    }
    return 0;
}
