/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:57:56 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 16:13:36 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iomanip>
#include <limits>
#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	~Zombie();

	void	announce(void);
	void	setname(std::string name);
	std::string	getname(void);
};

Zombie* zombieHorde(int N, std::string name);


#endif