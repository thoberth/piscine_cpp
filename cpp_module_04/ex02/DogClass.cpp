/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:06:42 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/13 13:25:19 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

Dog::Dog() : Animal()
{
    _brain = new Brain();
    std::cout << "Default Constructor Dog Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & to_copy) : Animal(to_copy)
{
    this->type = to_copy.getType();
    this->_brain = new Brain(* to_copy._brain);
    std::cout << "Constructor by copy Dog Called" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Destructor Dog Called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Wouf Waf Waf!" << std::endl;
}

Brain & Dog::getBrain()
{
    return(*this->_brain);
}

Dog & Dog::operator=(Dog const & a)
{
	std::cout << "operator dog = called" << std::endl;
    this->type = a.getType();
	*_brain = *a._brain;
    return (*this);
}
