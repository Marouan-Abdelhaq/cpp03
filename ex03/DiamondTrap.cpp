/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:04:19 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/21 02:32:35 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    hit_point = FragTrap::hit_point;
    energy_point = ScavTrap::energy_point;
    attak_damage = FragTrap::attak_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    hit_point = FragTrap::hit_point;
    energy_point = 50;
    attak_damage = FragTrap::attak_damage;
    std::cout << "DiamondTrap " << name << " parameter constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj)
{
    if (this == &obj)
        return *this;
    this->attak_damage = obj.attak_damage;
    this->energy_point = obj.energy_point;
    this->hit_point = obj.hit_point;
    this->name = obj.name;
    ClapTrap::name = obj.ClapTrap::name;
    std::cout << "DiamondTrap " << name << " copy assignment operator called" << std::endl;
    return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) :  ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
    this->attak_damage = obj.attak_damage;
    this->energy_point = obj.energy_point;
    this->hit_point = obj.hit_point;
    this->name = obj.name;
    std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << this->name << " ClapTrap " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}
