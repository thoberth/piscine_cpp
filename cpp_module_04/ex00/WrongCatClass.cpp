/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:54:52 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/10 13:42:25 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCatClass.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Default Constructor WrongCat Called" << std::endl;
    this->type = "Cat";
}

WrongCat::WrongCat(WrongCat const & to_copy) : WrongAnimal(to_copy)
{
    std::cout << "Constructor by copy WrongCat Called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat Called" << std::endl;
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
