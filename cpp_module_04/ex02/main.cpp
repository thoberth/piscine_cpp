/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:10:34 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/13 14:43:16 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"
#include "CatClass.hpp"

int main()
{
	//Animal i;
	//i.makeSound();
	Animal *i;
	Cat j;
	i = &j;
	i->makeSound();
}
