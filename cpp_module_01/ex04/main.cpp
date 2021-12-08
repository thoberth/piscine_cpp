/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:08:58 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 15:59:19 by thoberth         ###   ########.fr       */
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

	if (ac != 4)
	{
		std::cerr << "Error: Not enough or too much argument(s)!" << std::endl;
		return (1);
	}
	s += av[1];
	s += ".replace";
	s1 += av[2];
	s2 += av[3];
	size_t	pos = -(s2.length());
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
		pos = -(s2.length());
		while ((pos = ligne_lue.find(s1, pos + s2.length())) != std::string::npos)
		{
			ligne_lue.erase(pos, s1.length());
			ligne_lue.insert(pos, s2);
		}
		flux_sortie << ligne_lue;
		if (!flux_entre.eof())
			flux_sortie << std::endl;
	}
	return (0);
}