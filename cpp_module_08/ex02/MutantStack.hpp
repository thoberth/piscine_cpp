/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 19:50:33 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/06 16:15:26 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {}
		MutantStack( MutantStack const & src ) { *this = src; }
		~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}

		MutantStack &			operator=( MutantStack const & rhs )
		{
			this->c = rhs.c;
			return (*this);
		}
};

#endif /* ***************************************************** MutantStack_H */
