/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:41:20 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/01 20:44:17 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::debug(void)
{
	std::cout << "[DEBUG]\nI love to get extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!\n" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra "
	<< "bacon cost more money. You dont put enough!\nIf you did I would not have to ask "
	<< "for it!\n" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been "
	<< "coming here for years and you just started working here last month.\n" << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void Karen::complain(std::string level)
{
	const char	*input[4] = { "DEBUG",  "INFO", "WARNING", "ERROR"};
	void	(Karen::*ptr_func)(void) = NULL;
	int	i = 0;

	while (i < 4 && input[i] != level)
		i++;
	switch (i)
	{
	case 0:
		ptr_func = &Karen::debug;
		(this->*ptr_func)();
		Karen::complain("INFO");
		break;
	case 1:
		ptr_func = &Karen::info;
		(this->*ptr_func)();
		Karen::complain("WARNING");
		break;
	case 2:
		ptr_func = &Karen::warning;
		(this->*ptr_func)();
		Karen::complain("ERROR");
		break;
	case 3:
		ptr_func = &Karen::error;
		(this->*ptr_func)();
		break;
	default:
		std::cout << "What ?" << std::endl;
		return;
	}
}