/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 07:46:54 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/05 08:03:23 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>

class PhoneBook
{
private:
    Contact contacts[8];
    int currentIndex;
    int totalContacts;

    std::string truncateString(const std::string &str) const;
    std::string getInput(const std::string &prompt) const;
    void displayContactTable() const;
    void displayContact(int index) const;

public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContact() const;
};

#endif