/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:06:34 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/05 19:22:33 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class Span
{

	public:
		Span();
		Span( unsigned int N );
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );

		void	addNumber(int add);
		void	addNumber(std::vector<int>::iterator &begin,
			std::vector<int>::iterator &end);
		std::vector<int>::iterator begin();
		std::vector<int>::iterator end();
		size_t	size();
		int		shortestSpan();
		int		longestSpan();

		class	AlreadyFull : public std::exception
		{
			public :
				virtual const char * what() const throw();
		};
	private:
		unsigned int _N;
		std::vector<int> _v;
};

#endif /* ************************************************************ SPAN_H */
