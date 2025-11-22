/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:43:00 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/20 23:24:51 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n=== BASIC CREATION TEST ===" << std::endl;
    ClapTrap a("Alpha");
    ScavTrap s("Scavy");

    std::cout << "\n=== COPY TEST ===" << std::endl;
    ScavTrap copyS(s);
    ScavTrap assignS;
    assignS = s;

    std::cout << "\n=== CLAPTRAP ACTION TEST ===" << std::endl;
    a.attack("Target1");
    a.takeDamage(3);
    a.beRepaired(2);

    std::cout << "\n=== SCAVTRAP ACTION TEST ===" << std::endl;
    s.attack("Target2");
    s.takeDamage(20);
    s.beRepaired(10);

    std::cout << "\n=== SCAVTRAP SPECIAL MODE ===" << std::endl;
    s.guardGate();

    std::cout << "\n=== ENERGY EXHAUSTION TEST ===" << std::endl;
    ScavTrap energyBoy("NoPower");
    for (int i = 0; i < 51; ++i)
        energyBoy.attack("Dummy");

    std::cout << "\n=== DEAD BOT TEST ===" << std::endl;
    ScavTrap dead("Zombie");
    dead.takeDamage(200);
    dead.attack("Ghost");
    dead.beRepaired(50);
    dead.guardGate();

    std::cout << "\n=== PROGRAM END ===" << std::endl;
}
