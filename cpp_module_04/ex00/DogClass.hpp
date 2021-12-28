/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:56:05 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 14:34:45 by thoberth         ###   ########.fr       */
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
    virtual ~Dog();

    virtual void makeSound() const;

    Dog & operator=(Dog const & a);
};

#endif
