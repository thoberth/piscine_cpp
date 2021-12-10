/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:10:34 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/10 16:47:54 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"
#include "CatClass.hpp"

int main()
{
    Animal *array[4];
    int t_array= 4;

    std::cout << std::endl;

    for (int i = 0; i < (t_array / 2); i++)
        array[i] = new Dog();
    std::cout << std::endl;
    for (int i = (t_array / 2); i < t_array; i++)
        array[i] = new Cat();
    std::cout << std::endl;

    for (int i = 0; i < t_array; i++)
        delete array[i];
    std::cout << std::endl;

    Dog a;
    std::cout << std::endl;
    Dog b(a);
    std::cout << std::endl;


}
