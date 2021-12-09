/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:53:17 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/09 21:52:35 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"

Animal::Animal()
{
}

Animal::Animal(Animal const & to_copy)
{
    *this = to_copy;
}

Animal::~Animal()
{
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{}

Animal & Animal::operator=(Animal const & a)
{
    this->type = a.getType();
    return (*this);
}
