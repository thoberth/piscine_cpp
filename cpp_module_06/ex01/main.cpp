/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 15:44:18 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 17:13:20 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

typedef struct Data {
    int     i;
    char    c;
    double  dou;
    std::string str;
}               Data;

uintptr_t serialize(Data* ptr)
{
    uintptr_t to_ret;
    to_ret = reinterpret_cast<uintptr_t>(ptr);
    return (to_ret);
}

Data* deserialize(uintptr_t raw)
{
    Data *to_ret;
    to_ret = reinterpret_cast<Data *>(raw);
    return (to_ret);
}

int main()
{
    Data d;
    d.i = 12;
    d.c = 'a';
    d.dou = 12.15;
    d.str = "This will not change\n";
    uintptr_t   t = serialize(&d);
    Data *c = deserialize(t);

    std::cout << d.i << std::endl \
    << d.c << std::endl \
    << d.dou << std::endl \
    << d.str << std::endl;

    std::cout << c->i << std::endl \
    << c->c << std::endl \
    << c->dou << std::endl \
    << c->str << std::endl;
}
