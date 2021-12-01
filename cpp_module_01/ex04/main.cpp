/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:08:58 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/01 21:11:14 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string s;
	std::string ligne_lue;
	std::string s1;
	std::string s2;
	size_t	pos = -1;

	if (ac != 4)
	{
		std::cerr << "Error: Not enough or too much argument(s)!" << std::endl;
		return (1);
	}
	s += av[1];
	s += ".replace";
	s1 += av[2];
	s2 += av[3];
	std::ifstream	flux_entre(av[1]);
	if (!flux_entre)
	{
		std::cerr << "Error: Operation file corrupted!" << std::endl;
		return (1);
	}
	std::ofstream	flux_sortie(s.c_str());
	if (!flux_sortie)
	{
		std::cerr << "Error: Operation file corrupted!" << std::endl;
		return (1);
	}
	while (std::getline(flux_entre, ligne_lue))
	{
		while ((pos = ligne_lue.find(s1, pos + 1)) != std::string::npos)
		{
			ligne_lue.erase(pos, s1.length());
			ligne_lue.insert(pos, s2);
		}
		flux_sortie << ligne_lue << std::endl;
	}
	return (0);
}