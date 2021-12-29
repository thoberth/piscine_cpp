/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:28:23 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/29 19:48:51 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"
#include "Base.hpp"

Base* generate(void)
{
    srand(time(NULL));
    int random = rand() % 3;
    std::cout << "--generate--\n"
    << "0 = ClassA // 1 = ClassB // 2 = ClassC\n"
    << random << std::endl;
    if (random == 0)
        return (new ClassA);
    else if (random == 1)
        return (new ClassB);
    return (new ClassC);
}

void identify(Base* p)
{
    if (dynamic_cast<ClassA*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<ClassB*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<ClassC*>(p))
        std::cout << "C\n";
}

void identify(Base & p)
{
    //identify(&p); very easy.... else :
    try
    {
        if (ClassA & b = dynamic_cast<ClassA&>(p))
            std::cout << "A\n";
        else if (dynamic_cast<ClassB&>(p))
            std::cout << "B\n";
        else if (dynamic_cast<ClassC&>(p))
            std::cout << "C\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bad Cast" << '\n';
    }
    
}

int main()
{
    Base *p = generate();
    std::cout << "--identify(pointeur)--\n";
    identify(p);
    std::cout << "--identify(reference)--\n";
    identify(*p);
}
