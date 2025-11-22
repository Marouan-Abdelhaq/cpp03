/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelha <mabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:34:07 by mabdelha          #+#    #+#             */
/*   Updated: 2025/11/21 01:16:37 by mabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << "=== BASIC CREATION ===" << std::endl;
    ClapTrap a("Alpha");
    ClapTrap b("Bravo");

    std::cout << "\n=== COPY TESTS ===" << std::endl;
    ClapTrap c(a);       
    ClapTrap d;              
    d = b;                  

    std::cout << "\n=== ATTACK TEST ===" << std::endl;
    a.attack("a target");
    b.attack("another target");

    std::cout << "\n=== DAMAGE TEST ===" << std::endl;
    a.takeDamage(5);
    a.takeDamage(6);         

    std::cout << "\n=== REPAIR TEST ===" << std::endl;
    b.takeDamage(3);
    b.beRepaired(2);        
    b.beRepaired(20);        

    std::cout << "\n=== ENERGY EXHAUSTION TEST ===" << std::endl;
    ClapTrap e("EnergyBoy");
    for (int i = 0; i < 12; i++)
        e.attack("dummy target");  

    std::cout << "\n=== DEAD ROBOT TEST ===" << std::endl;
    ClapTrap f("DeadOne");
    f.takeDamage(20);       
    f.attack("Ghost");       
    f.beRepaired(5);        
    f.takeDamage(10);        

    std::cout << "\n=== PROGRAM END ===" << std::endl;

    return 0;
}
