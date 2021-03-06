/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:24:54 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/05 14:02:57 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int main()
{
	std::list<int> l;

	easyfind(l, 15);	// No int in easyfind
	l.push_back(15);	// Add 15 in list<int>
	easyfind(l, 15);	// we found a match
	l.remove(15);
	easyfind(l, 15);

	std::vector<int> v;

	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	easyfind(v, 9);
	easyfind(v, 7);
}
