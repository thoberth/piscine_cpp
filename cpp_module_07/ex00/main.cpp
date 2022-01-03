/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:57:00 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/03 16:13:13 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int i(12);
    int ii(24);

    double d(254.341);
    double dd(632.214);

    char c('z');
    char cc('a');

    std::cout << "la fonction max renvoie :" << std::endl;
    std::cout << max(i, ii) << std::endl;
    std::cout << "la fonction max renvoie :" << std::endl;
    std::cout << max(d, dd) << std::endl;
    std::cout << "la fonction max renvoie :" << std::endl;
    std::cout << max(c, cc) << std::endl;

    std::cout << std::endl;

    std::cout << "On utilise swap avec les int : i = " << i << " et ii = "<< ii<< std::endl;
    swap(i, ii);
    std::cout << "et maintenant : i = " << i << " et ii = "<< ii << std::endl;
    std::cout << "On utilise swap avec les double : d = " << d << " et dd = "<< dd << std::endl;
    swap(d, dd);
    std::cout << "et maintenant : d = " << d << " et dd = "<< dd << std::endl;
    std::cout << "On utilise swap avec les char : c = " << c << " et cc = "<< cc << std::endl;
    swap(c, cc);
    std::cout << "et maintenant : c = " << c << " et cc = "<< cc << std::endl;

    std::cout << std::endl;

    std::cout << "la fonction min renvoie :" << std::endl;
    std::cout << min(i, ii) << std::endl;
    std::cout << "la fonction min renvoie :" << std::endl;
    std::cout << min(d, dd) << std::endl;
    std::cout << "la fonction min renvoie :" << std::endl;
    std::cout << min(c, cc) << std::endl;
}
