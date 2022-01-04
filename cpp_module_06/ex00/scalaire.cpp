/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 15:04:21 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/04 11:07:34 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Myclass.hpp"
#include <iostream>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error : Wrong number of argument!" << std::endl;
		return 1;
	}
	Myclass		toconv(av[1]);
	toconv.putChar();
	toconv.putInt();
	toconv.putFloat();
	toconv.putDouble();
}
