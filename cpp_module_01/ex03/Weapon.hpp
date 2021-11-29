/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:06:44 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 18:10:46 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon
{
private:
	std::string _weapon;
public:
	Weapon(std::string name);
	~Weapon();

	std::string const & getType(void);
	void setType(std::string weapon);
};

#endif