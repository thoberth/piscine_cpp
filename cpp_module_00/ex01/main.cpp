/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:26:13 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/07 13:22:22 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

int main()
{
	std::string cmd;
	int nbr_membre = 0;
	Contact Phonebook[8];


	for (;;) // boucle infinie avec for
	{
		std::cout << "$< ";
		std::cin >> cmd;
		std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
		if (cmd  == "EXIT")
			exit (0);
		else if (cmd == "ADD")
		{
			if (nbr_membre == 8)
				std::cout << "You don't have any more space" << std::endl;
			else
			{
				Phonebook[nbr_membre].add();
				nbr_membre++;
			}
		}
		else if (cmd == "SEARCH")
			Phonebook[nbr_membre].search(Phonebook, nbr_membre);
		else
			std::cout << "What is this command bro?" << std::endl;
	}
	return (0);
}