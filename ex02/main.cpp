/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:21:57 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/21 01:56:32 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== BASIC CREATION TEST ===" << std::endl;
    ClapTrap a("Alpha");
    ScavTrap b("Bravo");
    FragTrap c("Charlie");

    std::cout << "\n=== COPY TEST ===" << std::endl;
    ClapTrap a_copy(a);
    ScavTrap b_copy(b);
    FragTrap c_copy(c);

    ClapTrap d;
    d = a;
    ScavTrap e;
    e = b;
    FragTrap f;
    f = c;

    std::cout << "\n=== ACTION TEST ===" << std::endl;
    a.attack("Target1");
    a.takeDamage(5);
    a.beRepaired(3);

    b.attack("Target2");
    b.takeDamage(10);
    b.beRepaired(5);
    b.guardGate();

    c.attack("Target3");
    c.takeDamage(20);
    c.beRepaired(10);
    c.highFivesGuys();

    std::cout << "\n=== ENERGY EXHAUSTION TEST ===" << std::endl;
    FragTrap energyBot("NoPower");
    for (int i = 0; i < 60; i++)
        energyBot.attack("Dummy");

    std::cout << "\n=== DEAD BOT TEST ===" << std::endl;
    FragTrap deadBot("DeadFrag");
    deadBot.takeDamage(200);
    deadBot.attack("Ghost");
    deadBot.beRepaired(5);
    deadBot.highFivesGuys();

    std::cout << "\n=== DESTRUCTOR TEST ===" << std::endl;
    {
        FragTrap temp("TempFrag");
        ScavTrap tempS("TempScav");
        ClapTrap tempC("TempClap");
    }

    std::cout << "\n=== PROGRAM END ===" << std::endl;
    return 0;
}
