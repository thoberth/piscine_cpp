/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:38:25 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 13:41:11 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(ScavTrap const & to_copy);
    ScavTrap(std::string name);
    ~ScavTrap();

    void    guardgate();

    ScavTrap & operator=(ScavTrap const & a);
};

#endif