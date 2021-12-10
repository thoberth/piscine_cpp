/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:06:42 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/10 16:48:36 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Default Constructor Dog Called" << std::endl;
    _brain = new Brain;
    this->type = "Dog";
}

Dog::Dog(Dog const & to_copy) : Animal(to_copy)
{
    this->type = to_copy.getType();
    this->_brain = new Brain;
    for (int i(0); i < 100; i++)
        this->_brain->setIdeas(to_copy._brain->getIdeas(i), i);
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
    this->type = a.getType();
    return (*this);
}
