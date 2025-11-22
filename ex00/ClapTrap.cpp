/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:34:00 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/21 02:35:33 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hit_point(10), energy_point(10), attak_damage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), energy_point(10), attak_damage(0)
{
    std::cout << "Parameter " << name << " constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    if (this == &obj)
        return *this;
    this->name = obj.name;
    this->hit_point = obj.hit_point;
    this->energy_point = obj.energy_point;
    this->attak_damage = obj.attak_damage;
    std::cout << "Copy " << name << " assignment operator called" << std::endl;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    *this = obj;
    std::cout << "Copy " << name << " constructor called" << std::endl;
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
            std::cout << "ClapTrap " << name << " can't take damage"<< std::endl;
    }
    else
        std::cout << "ClapTrap " << name << " can't take damage"<< std::endl;
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
        std::cout << "ClapTrap " << name << " can't repairs itself" << std::endl; 
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor " << name << " called" << std::endl;
}
