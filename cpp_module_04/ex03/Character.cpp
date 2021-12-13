/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:54:05 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/13 19:11:48 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : ICharacter()
{
}

Character::Character( const Character & src ) : ICharacter(src)
{
	this->equip(src._inventory[0]);
	this->equip(src._inventory[1]);
	this->equip(src._inventory[2]);
	this->equip(src._inventory[3]);
}

Character::Character( std::string const name ) : ICharacter(name)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->equip(rhs._inventory[0]);
		this->equip(rhs._inventory[1]);
		this->equip(rhs._inventory[2]);
		this->equip(rhs._inventory[3]);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << "Value = " << i.getName();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m)
{
	int i(0);

	while (i < 4 && _inventory[i] == NULL)
		i++;
	if (i != 4)
	{
		_inventory[i] = m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0)
		_inventory[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName() const
{
	return (this->_name);
}

/* ************************************************************************** */
