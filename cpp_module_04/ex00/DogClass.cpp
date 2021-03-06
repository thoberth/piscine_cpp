/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:06:42 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/10 13:47:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Default Constructor Dog Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog const & to_copy) : Animal(to_copy)
{
    std::cout << "Constructor by copy Dog Called" << std::endl;
}


Dog::~Dog()
{
    std::cout << "Destructor Dog Called" << std::endl;
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
