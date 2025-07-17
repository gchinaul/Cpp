/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 18:40:11 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/06 19:13:16 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string test = "BRAINNN";
    std::string *stringPTR = &test;
    std::string &stringREF = test;

    std::cout << "Address test:" << &test << std::endl;
    std::cout << "Address stringPTR: " << stringPTR << std::endl;
    std::cout << "Address stringREF; " << &stringREF << std::endl;

    std::cout << "\n--------------POLICE----------------\n"
              << std::endl;

    std::cout << "Value test: " << test << std::endl;
    std::cout << "Value stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value stringREF: " << stringREF << std::endl;
}
