/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:01:58 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/26 17:33:26 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include <iostream>
#include <limits>
#include <iomanip>

class PhonebookClass
{
private:
	/* data */
public:
	std::string first_name; //ceci est un attribut membre
	std::string last_name;
	std::string nick_name;
	int	number;
	std::string darkest_secret;

	PhonebookClass(); // Constructeur
	~PhonebookClass(); // Destructeur

	void	add(void); //ceci est une fonction membre
	int	search(PhonebookClass instance[8], int nbr_membre);
};

#endif