/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:01:56 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/26 18:32:04 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp" 

/* Constructeur de ma classe */
PhonebookClass::PhonebookClass(void)
{
	//std::cout << "Constructor Called" << std::endl;
}

/* Destructeur de ma classe */
PhonebookClass::~PhonebookClass(void)
{
	//std::cout << "Destructor Called" << std::endl;
}

/* la fonction membre de ma classe */
void	PhonebookClass::add(void)
{
	std::cout << "Firstname : ";
	std::getline(std::cin, this->first_name);
	std::cout << "Lastname : ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->nick_name);
	std::cout << "Number : ";
	std::cin >> this->number;
	std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->darkest_secret);
}

int	PhonebookClass::search(PhonebookClass instance[8], int nbr_membre)
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
		if (instance[i].first_name.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << instance[i].first_name[j];
			std::cout << ".|";
		}
		else
			std::cout << std::setw(10) << instance[i].first_name << '|';
		if (instance[i].last_name.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << instance[i].last_name[j];
				std::cout << ".|";
		}
		else
			std::cout << std::setw(10) << instance[i].last_name << '|';
		if (instance[i].nick_name.length() > 10)
		{
			for (int j = 0; j < 9; j++)
				std::cout << instance[i].nick_name[j];
				std::cout << ".|" << std::endl;
		}
		else
			std::cout << std::setw(10) << instance[i].nick_name << '|' << std::endl;
		i++;
	}
	std::cout << "Who would you like to call? ";
	std::cin >> i;
	i -= 1;
	if (i < 0 || i >= nbr_membre)
		std::cout << "Bad index" << std::endl;
	else
	{
		std::cout << instance[i].first_name << std::endl
			<< instance[i].last_name << std::endl
			<< instance[i].nick_name << std::endl
			<< instance[i].number << std::endl
			<< instance[i].darkest_secret << std::endl;
	}
	return (0);
}