/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:10:45 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/07 13:18:52 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::add(void)
{
	std::cout << "Firstname : ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Lastname : ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->_nick_name);
	std::cout << "Number : ";
	std::getline(std::cin, this->_number);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->_darkest_secret);
}

int	Contact::search(Contact instance[8], int nbr_membre)
{
	int	i;

	i = 0;
	if (nbr_membre > 0)
		std::cout << "     index|first name| last name|  nickname|" << std::endl;
	else
	{
		std::cout << "You have any contact yet!" << std::endl;
		return (0);
	}
	while (i < nbr_membre)
	{
		std::cout << std::setw(10) << i + 1 << '|';
		if (instance[i]._first_name.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << instance[i]._first_name[j];
			std::cout << ".|";
		}
		else
			std::cout << std::setw(10) << instance[i]._first_name << '|';
		if (instance[i]._last_name.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << instance[i]._last_name[j];
			std::cout << ".|";
		}
		else
			std::cout << std::setw(10) << instance[i]._last_name << '|';
		if (instance[i]._nick_name.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << instance[i]._nick_name[j];
			std::cout << ".|" << std::endl;
		}
		else
			std::cout << std::setw(10) << instance[i]._nick_name << '|' << std::endl;
		i++;
	}
	std::cout << "Who would you like to call? ";
	std::cin >> i;
	i -= 1;
	if (i < 0 || i >= nbr_membre)
		std::cout << "Bad index" << std::endl;
	else
	{
		std::cout << instance[i]._first_name << std::endl
			<< instance[i]._last_name << std::endl
			<< instance[i]._nick_name << std::endl
			<< instance[i]._number << std::endl
			<< instance[i]._darkest_secret << std::endl;
	}
	return (0);
}