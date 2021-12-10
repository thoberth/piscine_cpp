/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:55:37 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/10 13:46:22 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Default Constructor Cat Called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & to_copy) : Animal(to_copy) 
{
    std::cout << "Constructor by copy Cat Called" << std::endl;
}


Cat::~Cat()
{
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
