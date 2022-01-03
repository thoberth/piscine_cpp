/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:09:54 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/03 19:33:00 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void    print(T &to_print)
{
    std::cout << to_print << std::endl;
}

template <typename T>
void    iter(T *array, int length, void (*psf)(T &a))
{
    int i(0);
    while (i < length)
    {
        psf(array[i]);
        i++;
    }
}
