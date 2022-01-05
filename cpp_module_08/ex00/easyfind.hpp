/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:47:43 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/05 19:52:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
void	easyfind(T & t, const int match)
{
	typename T::iterator it;
	it = find(t.begin(), t.end(), match);
	if (*it == match)
		std::cout << "Match found! " << match << std::endl;
	else
		std::cerr << "No match found!" << std::endl;
}

#endif
