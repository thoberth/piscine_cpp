/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:10:34 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 14:30:54 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"
#include "CatClass.hpp"
#include "WrongCatClass.hpp"

int main()
{
    const Animal* meta = new Animal();
    std::cout << std::endl;
    const Animal* j = new Dog();
    std::cout << std::endl;
    const Animal* i = new Cat();
    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << std::endl;
    delete meta;
    std::cout << std::endl;
    delete j;
    std::cout << std::endl;
    delete i;
    std::cout << std::endl;
    
    const WrongAnimal* a = new WrongAnimal();
    std::cout << std::endl;
    const WrongAnimal* b = new WrongCat();
    WrongCat c;
    
    std::cout << std::endl;

    b->makeSound();
    a->makeSound();
    c.makeSound();

    std::cout << std::endl;
    delete a;
    std::cout << std::endl;
    delete b;
}
