/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:03:12 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/19 23:38:55 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& obj);
        ScavTrap& operator=(const ScavTrap& obj);
        void attack(const std::string& target);
        void guardGate();
        ~ScavTrap();
};

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    ClapTrap::operator=(obj);
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

void ScavTrap::attack(const std::string& target)
{
    if (energy_point > 0 && hit_point > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attak_damage << " points of damage!" << std::endl;
        energy_point = energy_point - 1;
    }
    else
        std::cout << "ScavTrap " << name << " can't attack" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " Destrocter called" << std::endl;
}


#endif