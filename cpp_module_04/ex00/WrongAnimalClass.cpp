/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimalClass.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:43:37 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/09 22:07:52 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimalClass.hpp"

WrongAnimal::WrongAnimal()
{
}

WrongAnimal::WrongAnimal(WrongAnimal const & to_copy)
{
    *this = to_copy;
}

WrongAnimal::~WrongAnimal()
{
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "This is Wrong Animal i shouldn't make sound..." << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & a)
{
    this->type = a.getType();
    return (*this);
}
