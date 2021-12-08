/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:48:50 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/08 19:21:45 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    
public:
    FragTrap();
    FragTrap(FragTrap const & to_copy);
    FragTrap(std::string name);
    ~FragTrap();

    void    highFivesGuys(void);

    FragTrap & operator=(FragTrap const & a);
};

#endif