/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:59:16 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/20 13:28:24 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main ()
{
    ClapTrap Thomas("Thomas");
    std::cout << std::endl;
    ScavTrap Victor("Victor");
    std::cout << std::endl;
    FragTrap Edouard("Edouard");
    std::cout << std::endl;
    DiamondTrap Benji("Benji");
    std::cout << std::endl;
    
    std::cout << Thomas.getName() << " has " << Thomas.getAttack_damage() << std::endl;
    std::cout << std::endl;
    std::cout << Victor.getName() << " has " << Victor.getAttack_damage() << std::endl;
    std::cout << std::endl;
    std::cout << Edouard.getName() << " has " << Edouard.getAttack_damage() << std::endl;
    std::cout << std::endl;

    Thomas.attack(Victor.getName());
    std::cout << std::endl;
    Victor.takeDamage(Thomas.getHit_points());
    std::cout << std::endl;
    Thomas.beRepaired(10);
    std::cout << std::endl;
    Victor.guardGate();
    std::cout << std::endl;
    Edouard.highFivesGuys();
    std::cout << std::endl;
    Benji.attack(Thomas.getName());
    std::cout << std::endl;
    Benji.guardGate();
    std::cout << std::endl;
    Benji.highFivesGuys();
    std::cout << std::endl;
}