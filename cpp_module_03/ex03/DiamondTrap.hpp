/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:47:44 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 20:15:15 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(DiamondTrap const & to_copy);
    DiamondTrap(std:: string name);
    ~DiamondTrap();

    void    whoAmI();
    DiamondTrap & operator=(DiamondTrap const & a);
};

#endif