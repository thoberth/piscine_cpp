/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:39:05 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 18:12:42 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon	&_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack(void);
};

#endif