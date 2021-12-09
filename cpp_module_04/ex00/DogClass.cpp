/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:06:42 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/09 22:07:29 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
}

Dog::Dog(Dog const & to_copy) : Animal(to_copy)
{}


Dog::~Dog()
{
}

void    Dog::makeSound() const
{
    std::cout << "Wouf Waf Waf!" << std::endl;
}

Dog & Dog::operator=(Dog const & a)
{
    this->type = a.getType();
    return (*this);
}
