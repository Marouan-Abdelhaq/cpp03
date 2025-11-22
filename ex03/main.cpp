/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:21:57 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/21 02:12:09 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "=== BASIC CREATION TEST ===" << std::endl;
    DiamondTrap dt1("Diamondy");

    std::cout << "\n=== COPY TEST ===" << std::endl;
    DiamondTrap dt2(dt1);
    DiamondTrap dt3;
    dt3 = dt1;

    std::cout << "\n=== ACTION TEST ===" << std::endl;
    dt1.attack("Enemy1");
    dt1.takeDamage(20);
    dt1.beRepaired(10);
    dt1.guardGate();
    dt1.highFivesGuys();

    std::cout << "\n=== ENERGY EXHAUSTION TEST ===" << std::endl;
    DiamondTrap dt4("Exhaust");
    for (int i = 0; i < 51; i++)
        dt4.attack("Dummy");

    std::cout << "\n=== DEAD BOT TEST ===" << std::endl;
    DiamondTrap dt5("DeadBot");
    dt5.takeDamage(200);
    dt5.attack("Ghost");
    dt5.beRepaired(5);
    dt5.guardGate();
    dt5.highFivesGuys();
    dt5.whoAmI();

    std::cout << "\n=== PROGRAM END ===" << std::endl;
    return 0;
}

