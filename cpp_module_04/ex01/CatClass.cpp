/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:55:37 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 14:40:03 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat() : Animal()
{
    _brain = new Brain();
    std::cout << "Default Constructor Cat Called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & to_copy) : Animal(to_copy)
{
	this->type = to_copy.getType();
    this->_brain = new Brain(* to_copy._brain);
    std::cout << "Constructor by copy Cat Called" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Destructor Cat Called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miaou Miaouuuuu!" << std::endl;
}

Brain & Cat::getBrain()
{
    return(*this->_brain);
}

Cat & Cat::operator=(Cat const & a)
{
    this->type = a.getType();
	this->_brain = a._brain;
    return (*this);
}
