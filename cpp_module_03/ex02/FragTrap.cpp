/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:55:50 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/20 13:23:50 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
}

FragTrap::FragTrap(FragTrap const & to_copy) : ClapTrap(to_copy)
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_Hit_points = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
    std::cout << name << " is created in constructor flagtrap" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor Fragtrap called" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << _name <<": Hey, High Five Guys ?" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & a)
{
    this->_Hit_points = a._Hit_points;
    this->_Energy_points = a._Energy_points;
    this->_Attack_damage = a._Attack_damage;
    return (*this);
}