/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:01:56 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/26 16:06:46 by thoberth         ###   ########.fr       */
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

void	PhonebookClass::search(PhonebookClass instance[8], int nbr_membre)
{
	(void)instance;
	(void)nbr_membre;
	std::cout << "CA COOOOOOMPILE" << std::endl;
}