/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:55:37 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/09 22:08:05 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
}

Cat::Cat(Cat const & to_copy) : Animal(to_copy) 
{}

Cat::~Cat()
{
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
