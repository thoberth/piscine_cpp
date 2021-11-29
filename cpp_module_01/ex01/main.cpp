/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:07:51 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 16:15:52 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int nb_toalloc;
	Zombie *Horde;

	std::cout << "Taille de la horde ?" << std::endl;
	std::cin >> nb_toalloc;
	Horde = zombieHorde(nb_toalloc, "yo");
	delete [] Horde;
}