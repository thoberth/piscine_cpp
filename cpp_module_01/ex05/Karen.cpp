/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:41:20 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/01 20:30:44 by thoberth         ###   ########.fr       */
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
	std::cout << "I love to get extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra "
	<< "bacon cost more money. You dont put enough! If you did I would not have to ask "
	<< "for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
	<< "coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
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
		break;
	case 1:
		ptr_func = &Karen::info;
		break;
	case 2:
		ptr_func = &Karen::warning;
		break;
	case 3:
		ptr_func = &Karen::error;
		break;
	default:
		std::cout << "What ?" << std::endl;
		return;
	}
	(this->*ptr_func)();
}