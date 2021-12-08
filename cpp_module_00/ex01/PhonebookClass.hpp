/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:12:04 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 10:17:53 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP
#include "ContactClass.hpp"

class Phonebook
{
private:
public:
    Phonebook();
    ~Phonebook();

    Contact contact[8];
};


#endif