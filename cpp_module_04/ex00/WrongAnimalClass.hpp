/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimalClass.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:42:04 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/10 13:40:54 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALCLASS_HPP
# define WRONGANIMALCLASS_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(WrongAnimal const & to_copy);
    ~WrongAnimal();

    std::string getType() const;

    void    makeSound() const ;

    WrongAnimal & operator=(WrongAnimal const & a);
};

#endif
