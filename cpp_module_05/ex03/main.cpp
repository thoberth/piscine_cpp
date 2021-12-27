/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:55:57 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/21 12:09:21 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat rob("robert", 1);
	Bureaucrat tom("tom", 150);
	PresidentialPardonForm f1("Macron");
	RobotomyRequestForm f2("Someone");
	ShrubberyCreationForm f3("Home");

	rob.signForm(f1);
	tom.signForm(f1);
	std::cout << std::endl;
	rob.signForm(f2);
	tom.signForm(f2);
	std::cout << std::endl;
	rob.signForm(f3);
	tom.signForm(f3);
	std::cout << std::endl;
	rob.executeForm(f1);
	tom.executeForm(f1);
	std::cout << std::endl;
	rob.executeForm(f2);
	tom.executeForm(f2);
	std::cout << std::endl;
	//rob.executeForm(f3);
	tom.executeForm(f3);
	std::cout << std::endl;

	Intern intern;
	Form *ptr;

	ptr = intern.makeForm("erreur", "target");
	ptr = intern.makeForm("shrubbery creation", "home");
	ptr->Action();
	delete ptr;
}
