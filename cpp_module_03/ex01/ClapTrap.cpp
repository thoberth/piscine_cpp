/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:40:18 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 17:26:57 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{}

ClapTrap::ClapTrap(ClapTrap const & to_copy)
{
    this->_name = to_copy._name;
    this->_Hit_points = to_copy._Hit_points;
    this->_Energy_points = to_copy._Energy_points;
    this->_Attack_damage = to_copy._Attack_damage;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _Hit_points(10),
    _Energy_points(10), _Attack_damage(0)
{
    std::cout << _name << " is created & Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " is destroyed & Destructor called" << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << this->_name << " attack " << target << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->_Energy_points -= amount;
    std::cout << this->_name << " has take " << amount << " damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->_Energy_points += amount;
    std::cout << this->_name << " has received " << amount << " Energy points!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}

int         ClapTrap::getHit_points(void) const
{
    return (this->_Hit_points);
}

int         ClapTrap::getEnergy_points(void) const
{
    return (this->_Energy_points);
}

int         ClapTrap::getAttack_damage(void) const
{
    return (this->_Attack_damage);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & a)
{
    this->_Hit_points = a._Hit_points;
    this->_Energy_points = a._Energy_points;
    this->_Attack_damage = a._Attack_damage;
    return (*this);
}