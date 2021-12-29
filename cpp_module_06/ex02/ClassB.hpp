/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:16:56 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/29 18:39:52 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSB_HPP
# define CLASSB_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class ClassB : public Base
{
	public:
		ClassB();
		ClassB( ClassB const & src );
		~ClassB();

		ClassB &		operator=( ClassB const & rhs );
};

#endif /* ********************************************************** CLASSB_H */
