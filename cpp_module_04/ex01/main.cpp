/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:10:34 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 14:41:02 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"
#include "CatClass.hpp"

int main()
{
	Animal *array[4];
	int t_array= 4;

	std::cout << std::endl;

	for (int i = 0; i < (t_array / 2); i++)
		array[i] = new Dog();
	std::cout << std::endl;
	for (int i = (t_array / 2); i < t_array; i++)
		array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < t_array; i++)
		delete array[i];
	std::cout << std::endl;
	std::cout << "/////////////////////////////////////////////////////////\n" << std::endl;

	Dog a;
	std::cout << a.getBrain().getIdeas(0) << std::endl;
	a.getBrain().setIdeas("I got an idea!", 0);

	std::cout << a.getBrain().getIdeas(0) << std::endl;
	std::cout << std::endl;

	Dog b(a);
	std::cout << b.getBrain().getIdeas(0) << std::endl;
	a.getBrain().setIdeas("This idea is private", 0);

	std::cout << a.getBrain().getIdeas(0) << std::endl;
	std::cout << b.getBrain().getIdeas(0) << std::endl;

	b = a;
	std::cout << b.getBrain().getIdeas(0) << std::endl;
	
	std::cout << std::endl;
}
