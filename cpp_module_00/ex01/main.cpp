/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:13 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 10:18:54 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

int main()
{
	std::string cmd;
	int nbr_membre = 0;
	int oldest_contact = 0; 
	Phonebook Phonebook;


	for (;;) // boucle infinie avec for
	{
		std::cout << "$< ";
		std::cin >> cmd;
		std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
		if (cmd  == "EXIT")
			return (0);
		else if (cmd == "ADD")
		{
			if (nbr_membre == 8)
			{
				std::cout << "You don't have any more space, we have to replace the oldest contact" << std::endl;
				Phonebook.contact[oldest_contact].add();
				oldest_contact++;
				if (oldest_contact == 8)
					oldest_contact = 0;
			}
			else
			{
				Phonebook.contact[nbr_membre].add();
				nbr_membre++;
			}
		}
		else if (cmd == "SEARCH")
			Phonebook.contact[nbr_membre].search(Phonebook.contact, nbr_membre);
		else
			std::cout << "What is this command bro?" << std::endl;
	}
	return (0);
}