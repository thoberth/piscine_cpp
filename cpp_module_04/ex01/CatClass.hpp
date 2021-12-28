/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:53:44 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 14:36:11 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATCLASS_HPP
# define CATCLASS_HPP

#include "AnimalClass.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;
public:
    Cat();
    Cat(Cat const & to_copy);
    virtual ~Cat();

    virtual void makeSound() const;

    Brain & getBrain();

    Cat & operator=(Cat const & a);
};

#endif
