/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:06:42 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 18:11:14 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) : _weapon(name)
{
}

Weapon::~Weapon()
{
}

std::string const & Weapon::getType(void)
{
	std::string const & to_ret = this->_weapon;

	return (to_ret);
}

void	Weapon::setType(std::string weapon)
{
	this->_weapon = weapon;
}