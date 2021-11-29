/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:22:12 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/29 17:01:45 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = string;

	stringPTR = &string;

	std::cout << "Adresse de string: " << &string << std::endl;
	std::cout << "Adresse de stringPTR: " << stringPTR << std::endl;
	std::cout << "Adresse de stringREF: " << &stringREF << std::endl;

	std::cout << "valeur de la string via le pointeur: " << *stringPTR << std::endl;
	std::cout << "valeur de la string via la reference: " << stringREF << std::endl;
}