/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:08:30 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/07 13:18:13 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <iostream>
#include <limits>
#include <iomanip>

class Contact
{
private:
    std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string	_number;
	std::string _darkest_secret;
public:
    Contact();
    ~Contact();

    void	add(void);
	int	search(Contact instance[8], int nbr_membre);
};

#endif