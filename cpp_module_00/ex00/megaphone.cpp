/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:31:31 by thoberth          #+#    #+#             */
/*   Updated: 2021/11/24 14:25:14 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; av[i] ; i++)
		{
			for (int j = 0; av[i][j] ; j++)
			{
				av[i][j] = toupper(av[i][j]);
			}
			std::cout << av[i];
		}
		std::cout << std::endl;
	}
	return (0);
}