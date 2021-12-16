/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:57 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/14 17:29:02 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat tom;
	Bureaucrat rob("robert", 1);

	std::cout << tom << std::endl;
	std::cout << rob << std::endl;

	tom.decGrade();
	rob.incGrade();

	std::cout << tom << std::endl;
	std::cout << rob << std::endl;
}
