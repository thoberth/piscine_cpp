/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:36:09 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 21:06:43 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int         _Hit_points;
    int         _Energy_points;
    int         _Attack_damage;
public:
    ClapTrap();
    ClapTrap(ClapTrap const & to_copy);
    ClapTrap(std::string name);
    virtual ~ClapTrap();

    virtual void    attack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    std::string getName(void) const;
    int         getHit_points(void) const;
    int         getEnergy_points(void) const;
    int         getAttack_damage(void) const;

    ClapTrap & operator=(ClapTrap const & a);
};

#endif