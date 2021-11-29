/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:00:13 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 13:48:44 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->setname(name);
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " Destructor called!" << std::endl;
}

std::string	Zombie::getname(void)
{
	std::string copy_name;

	copy_name = this->_name;
	return (copy_name);
}

void	Zombie::setname(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraaiiiiiiinnnzzzZ..." << std::endl; 
}