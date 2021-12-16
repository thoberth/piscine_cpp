/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:12:45 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/16 15:20:01 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	
	a = Fixed(10.1016f);

	std::cout << (a == b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a <= b) << std::endl;
	
	a++;

	std::cout << (a != b) << std::endl;
	std::cout << (a >= b) << std::endl;
	std::cout << (a <= b) << std::endl;

	a = Fixed(12);
	Fixed c(3);

	std::cout << a/c << std::endl;
	return 0;
}