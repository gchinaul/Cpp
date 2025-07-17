/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 09:13:38 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/05 10:17:55 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook PhoneBook;
    std::string command;

    std::cout << "Welcome to the PhoneBook!" << std::endl;
    std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;

    while (true)
    {
        std::cout << "> ";
        std::getline(std::cin, command);

        if (std::cin.eof())
        {
            std::cout << std::endl;
            break;
        }

        if (command == "ADD")
            PhoneBook.addContact();
        else if (command == "SEARCH")
            PhoneBook.searchContact();
        else if (command == "EXIT")
            break;
        else if (!command.empty())
            std::cout << "Unknown command. Available commands: ADD, SEARCH, EXIT" << std::endl;
    }

    std::cout << "Goodbye bb!" << std::endl;
    return 0;
}
