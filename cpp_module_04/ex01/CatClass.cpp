/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:55:37 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/10 15:07:43 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat() : Animal()
{
    _brain = new Brain;
    std::cout << "Default Constructor Cat Called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & to_copy) : Animal(to_copy) 
{
    _brain = new Brain;
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

Cat & Cat::operator=(Cat const & a)
{
    this->type = a.getType();
    return (*this);
}
