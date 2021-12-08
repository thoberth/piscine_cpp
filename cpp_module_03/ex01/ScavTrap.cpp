/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:41:39 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 17:33:08 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{}

ScavTrap::ScavTrap(ScavTrap const & to_copy) : ClapTrap(to_copy)
{
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_Hit_points = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
    std::cout << name << " is created in constructor scavtrap" << std::endl; 
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor Scavtrap called" << std::endl;
}

void    ScavTrap::guardgate()
{
    std::cout << _name << " have enterred in Gate keeper mode!" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & a)
{
    this->_Hit_points = a._Hit_points;
    this->_Energy_points = a._Energy_points;
    this->_Attack_damage = a._Attack_damage;
    return (*this);
}