/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:57:25 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/03 19:02:41 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void    swap(T & arg1, T & arg2)
{
    T tmp;
    tmp = arg2;
    arg2 = arg1;
    arg1 = tmp;
}

template <typename T>
T   min(T val1, T val2)
{
    if ( (val1 > val2) || (val1 == val2) )
        return val2;
    return val1;
}

template <typename T>
T   max(T val1, T val2)
{
    if ( (val2 > val1) || (val1 == val2) )
        return (val2);
    return (val1);
}
