/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:54:52 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/09 22:07:10 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCatClass.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "Cat";
}

WrongCat::WrongCat(WrongCat const & to_copy) : WrongAnimal(to_copy)
{}

WrongCat::~WrongCat()
{
}

void    WrongCat::makeSound() const
{
    std::cout << "Wrong cat: Miaou Miaouuuuu!" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & a)
{
    this->type = a.getType();
    return (*this);
}
