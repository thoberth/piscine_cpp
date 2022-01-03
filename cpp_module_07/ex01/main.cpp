/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:09:42 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/03 19:34:12 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "iter avec un tableau de int" << std::endl;

    iter(tab, 10, &print);

    std::string tab2[5] = {"salut", "moi", "c'est", "thomas", "!"};

    std::cout << "iter avec un tableau de string" << std::endl;

    iter(tab2, 5 , &print); 
}
