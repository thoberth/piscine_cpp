/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:53:17 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 14:22:00 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor Animal Called" << std::endl;
}

Animal::Animal(Animal const & to_copy)
{
    std::cout << "Constructor by copy Animal Called" << std::endl;
    *this = to_copy;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal Called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "an Animal Sound" << std::endl;
}

Animal & Animal::operator=(Animal const & a)
{
    this->type = a.getType();
    return (*this);
}
