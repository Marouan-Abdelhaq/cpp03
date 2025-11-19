/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:34:00 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/19 23:14:20 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hit_point(100), energy_point(50), attak_damage(20)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(100), energy_point(50), attak_damage(20)
{
    std::cout << "Parameter constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    this->name = obj.name;
    this->hit_point = obj.hit_point;
    this->energy_point = obj.energy_point;
    this->attak_damage = obj.attak_damage;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

void ClapTrap::attack(const std::string& target)
{
    if (energy_point > 0 && hit_point > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attak_damage << " points of damage!" << std::endl;
        energy_point = energy_point - 1;
    }
    else
        std::cout << "ClapTrap " << name << " can't attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_point > 0)
    {
        hit_point -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " damages! Hp: " << hit_point << std::endl;
        if (hit_point <= 0)
            std::cout << "ClapTrap " << name << " is dead" << std::endl; 
    }
    else
        std::cout << "ClapTrap " << name << " is dead" << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_point > 0 && hit_point > 0)
    {
        hit_point += amount;
        energy_point -= 1;
        std::cout << "ClapTrap " << name << " repairs itself for " << amount << " Hp is now " << hit_point << std::endl; 
    }
    else
        std::cout << "ClapTrap " << name << " is dead" << std::endl; 
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}