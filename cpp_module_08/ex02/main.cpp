/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:51:13 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/06 16:29:51 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main()
{
	{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "en haut de notre mstack : " << std::endl;
	std::cout << mstack.top() << std::endl;

	std::cout << "on enleve un element en haut de mstack :" << std::endl;
	mstack.pop();
	std::cout << mstack.top() << std::endl;

	std::cout << "la taille est maintenant de : " << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "on definit mtn 2 iterateurs : it & ite pour parcourir notre mstack" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	std::cout << "on verifie qu'on peut deplacer grace a nos iterateur : " << *it << std::endl;
	++it;
	std::cout << "++ -> " << *it << std::endl;
	--it;
	std::cout << "-- -> " << *it << std::endl;

	while (it != ite)
	{
		std::cout << "on parcourt mtn notre mstack : " << std::endl;
		std::cout << *it << std::endl;
		++it;
	}

		std::cout << "------------ test avec std::vector et quelques differences ------------\n\n";

	}

	{
	std::vector<int> mstack;

	mstack.push_back(5);
	mstack.push_back(17);

	std::cout << "en haut de notre mstack : " << std::endl;
	std::cout << mstack.back() << std::endl;

	std::cout << "on enleve un element en haut de mstack :" << std::endl;
	mstack.pop_back();
	std::cout << mstack.back() << std::endl;

	std::cout << "la taille est maintenant de : " << std::endl;
	std::cout << mstack.size() << std::endl;

	mstack.push_back(3);
	mstack.push_back(5);
	mstack.push_back(737);
	mstack.push_back(0);

	std::cout << "on definit mtn 2 iterateurs : it & ite pour parcourir notre mstack" << std::endl;
	std::vector<int>::iterator it = mstack.begin();
	std::vector<int>::iterator ite = mstack.end();

	std::cout << "on verifie qu'on peut deplacer grace a nos iterateur : " << *it << std::endl;
	++it;
	std::cout << "++ -> " << *it << std::endl;
	--it;
	std::cout << "-- -> " << *it << std::endl;

	while (it != ite)
	{
		std::cout << "on parcourt mtn notre mstack : " << std::endl;
		std::cout << *it << std::endl;
		++it;
	}
	}
}
