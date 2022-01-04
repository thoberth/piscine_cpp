/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Myclass.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 10:32:44 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/04 10:36:49 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYCLASS_HPP
# define MYCLASS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>
# include <stdlib.h>


class Myclass
{
	public:
		Myclass();
		Myclass( Myclass const & src );
		Myclass( const std::string av );
		~Myclass();

		Myclass &		operator=( Myclass const & rhs );

		void	putChar();
		void	putInt();
		void	putFloat();
		void	putDouble();

		float	getFloat() const;
		double	getDouble() const;
		int		getInt() const;
		char	getChar() const;
	private:
		float	_fl;
		double	_dou;
		int		_i;
		char	_c;
};

#endif /* ********************************************************* MYCLASS_H */
