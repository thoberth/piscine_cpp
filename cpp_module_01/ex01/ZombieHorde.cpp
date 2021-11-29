/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:56:29 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 16:15:06 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;
	Zombie *Horde;

	i = 0;
	Horde = new Zombie[N];
	while (i < N)
	{
		Horde[i].setname(name);
		Horde[i].announce();
		i++;
	}
	return(Horde);
}