/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:59:16 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 13:15:44 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ScavTrap.hpp"

int main ()
{
    ClapTrap Thomas("Thomas");
    ScavTrap Ennemi("Ennemi");

    Thomas.attack(Ennemi.getName());
    Ennemi.takeDamage(Thomas.getHit_points());
    Thomas.beRepaired(10);
    Ennemi.guardgate();
}