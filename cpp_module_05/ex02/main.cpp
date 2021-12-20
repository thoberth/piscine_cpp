/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:57 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/18 19:06:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat rob("robert", 1);
	Bureaucrat tom("tom", 150);
	PresidentialPardonForm f1("Macron");
	RobotomyRequestForm f2("Someone");
	ShrubberyCreationForm f3("Home");

	rob.signForm(f1);
	tom.signForm(f1);
	rob.signForm(f2);
	tom.signForm(f2);
	rob.signForm(f3);
	tom.signForm(f3);
	rob.executeForm(f1);
	tom.executeForm(f1);
	rob.executeForm(f2);
	tom.executeForm(f2);
	rob.executeForm(f3);
	tom.executeForm(f3);
}
