/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:21:24 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/21 02:01:51 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hit_point = 100;
    energy_point = 100;
    attak_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name_) : ClapTrap(name_)
{
    hit_point = 100;
    energy_point = 100;
    attak_damage = 30;
    std::cout << "FragTrap " << name << " parameter constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this == &obj)
        return *this;
    this->attak_damage = obj.attak_damage;
    this->energy_point = obj.energy_point;
    this->hit_point = obj.hit_point;
    this->name = obj.name;
    std::cout << "FragTrap " << name << " copy assignment operator called" << std::endl;
    return *this;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    this->attak_damage = obj.attak_damage;
    this->energy_point = obj.energy_point;
    this->hit_point = obj.hit_point;
    this->name = obj.name;
    std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a high five!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destructor called" << std::endl;
}
