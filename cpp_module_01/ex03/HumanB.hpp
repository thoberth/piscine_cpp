/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:15:55 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 18:25:07 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon	*_weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void attack(void);
	void setWeapon(Weapon &weapon);
};

#endif