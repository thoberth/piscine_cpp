/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:50:33 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/05 20:07:25 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stack>

class Mutantstack : public std::stack<class T>
{
	public:
		Mutantstack();
		Mutantstack( Mutantstack const & src );
		~Mutantstack();

		Mutantstack &		operator=( Mutantstack const & rhs );
	private:

};

#endif /* ***************************************************** MUTANTSTACK_H */
