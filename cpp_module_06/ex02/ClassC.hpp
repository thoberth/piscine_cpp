/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:16:49 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/28 17:24:03 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSC_HPP
# define CLASSC_HPP

# include <iostream>
# include <string>
# include "Base.hpp"

class ClassC : public Base
{
	public:
		ClassC();
		ClassC( ClassC const & src );
		~ClassC();

		ClassC &		operator=( ClassC const & rhs );
};

#endif /* ********************************************************** CLASSC_H */
