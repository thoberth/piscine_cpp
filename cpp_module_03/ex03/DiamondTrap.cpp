/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:48:54 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 21:04:11 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{}

DiamondTrap::DiamondTrap(DiamondTrap const & to_copy) : ClapTrap(to_copy), ScavTrap(to_copy), FragTrap(to_copy)
{}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->_name = name;
    this->ClapTrap::_name = name + "_clap_name";
    this->_Hit_points = FragTrap::_Hit_points;
    this->_Energy_points = ScavTrap::_Energy_points;
    this->_Attack_damage = FragTrap::_Attack_damage;
    std::cout << name << " is created in constructor diamondtrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor Diamondtrap called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "name " << this->_name << "name claptrap name" << this->ClapTrap::_name << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & a)
{
    this->_Hit_points = a._Hit_points;
    this->_Energy_points = a._Energy_points;
    this->_Attack_damage = a._Attack_damage;
    return(*this);
}