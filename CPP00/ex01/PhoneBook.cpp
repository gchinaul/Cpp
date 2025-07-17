/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 07:53:13 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/05 10:19:10 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0)
{
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::getInput(const std::string &prompt) const
{
    std::string input;

    while (input.empty())
    {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            exit(0);
        }
        if (input.empty())
            std::cout << "This field cannot be empty. Please try again" << std::endl;
    }
    return input;
}

void PhoneBook::addContact()
{
    Contact newContact;

    std::cout << "Adding a new contact..." << std::endl;

    newContact.setFirstName(getInput("Enter first name: "));
    newContact.setLastName(getInput("Enter last name: "));
    newContact.setNickname(getInput("Enter nickname: "));
    newContact.setPhoneNumber(getInput("Enter phone number: "));
    newContact.setDarkestSecret(getInput("Enter darkest secret: "));

    contacts[currentIndex] = newContact;
    currentIndex = (currentIndex + 1) % 8;
    if (totalContacts < 8)
        totalContacts++;

    std::cout << "Contact added successfully!" << std::endl;
}

std::string PhoneBook::truncateString(const std::string &str) const
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::displayContactTable() const
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < totalContacts; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncateString(contacts[i].getFirstName()) << "|";
        std::cout << std::setw(10) << truncateString(contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << truncateString(contacts[i].getNickname()) << std::endl;
    }
}

void PhoneBook::searchContact() const
{
    if (totalContacts == 0)
    {
        std::cout << "No contacts in phonebook." << std::endl;
        return;
    }

    displayContactTable();

    std::string input;
    std::cout << "Enter index of contact to display: ";
    std::getline(std::cin, input);

    if (std::cin.eof())
    {
        std::cout << std::endl;
        exit(0);
    }

    std::stringstream ss(input);
    int index;

    if (!(ss >> index) || !ss.eof() || index < 0 || index >= totalContacts)
    {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    displayContact(index);
}

void PhoneBook::displayContact(int index) const
{
    std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}
