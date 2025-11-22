/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 22:03:23 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/21 02:22:39 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hit_point = 100;
    energy_point = 50;
    attak_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_)
{
    hit_point = 100;
    energy_point = 50;
    attak_damage = 20;
    std::cout << "ScavTrap " << name << " parameter constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    if (this == &obj)
        return *this;
    this->attak_damage = obj.attak_damage;
    this->energy_point = obj.energy_point;
    this->hit_point = obj.hit_point;
    this->name = obj.name;
    std::cout << "ScavTrap " << name << " copy assignment operator called" << std::endl;
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    this->attak_damage = obj.attak_damage;
    this->energy_point = obj.energy_point;
    this->hit_point = obj.hit_point;
    this->name = obj.name;
    std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
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

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}