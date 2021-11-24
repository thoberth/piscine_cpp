/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:01:58 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/24 21:42:09 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

#include <iostream>

class PhonebookClass
{
private:
	/* data */
public:
	int tab[8]; //ceci est un attribut membre

	PhonebookClass();
	~PhonebookClass();

	void	func(void); //ceci est une fonction membre
};

#endif