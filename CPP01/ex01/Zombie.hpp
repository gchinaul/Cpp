/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchinaul <gchinaul@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:57:00 by gchinaul          #+#    #+#             */
/*   Updated: 2025/07/06 17:58:21 by gchinaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();

    void announce(void);
    std::string getName(void);
    void setName(std::string new_name);
};
