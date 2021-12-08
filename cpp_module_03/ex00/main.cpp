/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:59:16 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 11:11:42 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ClapTrap.hpp"

int main ()
{
    ClapTrap Thomas("Thomas");
    ClapTrap Ennemi("Ennemi");

    Thomas.attack(Ennemi.getName());
    Ennemi.takeDamage(Thomas.getHit_points());
    Thomas.beRepaired(10);
}