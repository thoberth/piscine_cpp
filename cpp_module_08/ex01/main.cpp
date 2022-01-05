/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:10:09 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/05 19:48:01 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(-2);
	sp.addNumber(-5);
	sp.addNumber(8);
	sp.addNumber(-12);
	sp.addNumber(-9);

	std::cout << "longestSpan is " << sp.longestSpan()
		<< " shortestSpan is " << sp.shortestSpan() << std::endl;

	sp.addNumber(6); // cannot add because size is 5

	Span cp(sp); // constructor by copy
	cp.addNumber(6);

	Span test(10000);

	std::vector<int> test2;
	for (int i(0); i < 10000; i++)
		test2.push_back(i);

	std::vector<int>::iterator it = test2.begin();
	std::vector<int>::iterator ite = test2.end();

	test.addNumber(it, ite);

	it = test.begin();
	ite = test.end();
	std::cout << test.size() << std::endl;
	//for (; it != ite; it++)
	//	std::cout << *it << std::endl;
}
