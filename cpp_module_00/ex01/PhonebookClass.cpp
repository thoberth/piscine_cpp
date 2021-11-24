/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:01:56 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/24 15:32:00 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp" 

/* Constructeur de ma classe */
PhonebookClass::PhonebookClass(void)
{
	std::cout << "Constructor Called" << std::endl;
}

/* Destructeur de ma classe */
PhonebookClass::~PhonebookClass(void)
{
	std::cout << "Destructor Called" << std::endl;
}

/* la fonction membre de ma classe */
void	PhonebookClass::func(void)
{
	std::cout << "ne fais rien" << std::endl;
}