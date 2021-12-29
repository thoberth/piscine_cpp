/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:15:45 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/29 18:29:09 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSA_HPP
# define CLASSA_HPP

# include <iostream>
# include <string>
# include "Base.hpp"
 
class ClassA : public Base
{
	public:
		ClassA();
		ClassA( ClassA const & src );
		~ClassA();

		ClassA &		operator=( ClassA const & rhs );
};

#endif /* ********************************************************** CLASSA_H */
