/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:02:39 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/01 15:19:14 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	(void)av;
	Karen ma;
	if (ac != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}
	ma.complain(av[1]);
	return (0);
}