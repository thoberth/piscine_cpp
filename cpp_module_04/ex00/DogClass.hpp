/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:56:05 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/09 21:59:21 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCLASS_HPP
# define DOGCLASS_HPP

#include "AnimalClass.hpp"

class Dog : public Animal
{
private:
    
public:
    Dog();
    Dog(Dog const & to_copy);
    ~Dog();

    void makeSound() const;

    Dog & operator=(Dog const & a);
};

#endif
