/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:04:21 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/26 13:41:47 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Myclass.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error : Wrong number of argument!" << std::endl;
		return 1;
	}
	std::cout << "Rappel :\n" \
	<< "taille d'un char en memoire : " << sizeof(char) << std::endl \
	<< "taille d'un int en memoire : " << sizeof(int) << std::endl \
	<< "taille d'un float en memoire : " << sizeof(float) << std::endl \
	<< "taille d'un double en memoire : " << sizeof(double) << std::endl;
	Myclass		toconv(av[1]);
	toconv.putChar();
	toconv.putInt();
	toconv.putFloat();
	toconv.putDouble();
}
