/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:41:05 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/03 20:33:55 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
    private :
        unsigned int _length;
        T * tab;
    public :
        Array()
        {
            T *tab[0];
        }
        Array( Array const & src );
        Array( unsigned int length );
        ~Array();
};