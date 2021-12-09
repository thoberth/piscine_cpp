/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 17:53:44 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/09 21:56:30 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATCLASS_HPP
# define CATCLASS_HPP

#include "AnimalClass.hpp"

class Cat : public Animal
{
private:

public:
    Cat();
    Cat(Cat const & to_copy);
    ~Cat();

    void makeSound() const;

    Cat & operator=(Cat const & a);
};

#endif
