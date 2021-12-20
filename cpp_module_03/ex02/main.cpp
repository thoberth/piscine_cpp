/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:59:16 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/20 13:21:34 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    ClapTrap Thomas("Thomas");
    ScavTrap Victor("Victor");
    FragTrap Edouard("Edouard");
    
    std::cout << Thomas.getName() << " has " << Thomas.getAttack_damage() << std::endl;
    std::cout << Victor.getName() << " has " << Victor.getAttack_damage() << std::endl;
    std::cout << Edouard.getName() << " has " << Edouard.getAttack_damage() << std::endl;

    Thomas.attack(Victor.getName());
    Victor.takeDamage(Thomas.getHit_points());
    Thomas.beRepaired(10);
    Victor.guardGate();
    Edouard.highFivesGuys();
}