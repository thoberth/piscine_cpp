/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:57 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/17 17:05:55 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat rob("robert", 1);
	Bureaucrat tom("tom", 150);
	Form	f;
	Form	f2(f);

	std::cout << f << std::endl;
	std::cout << f2 << std::endl;
	rob.signForm(f);
	tom.signForm(f2);
	std::cout << f << std::endl;
	std::cout << f2 << std::endl;
}
