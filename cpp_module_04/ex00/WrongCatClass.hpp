/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:54:49 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/09 22:04:17 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCATCLASS_HPP
# define WRONGCATCLASS_HPP

#include "WrongAnimalClass.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat();
    WrongCat(WrongCat const & to_copy);
    ~WrongCat();

    void makeSound() const;

    WrongCat & operator=(WrongCat const & a);
};

#endif
