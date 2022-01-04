/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:41:05 by thoberth          #+#    #+#             */
/*   Updated: 2022/01/04 16:46:38 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>

template <typename T>
class Array
{
	private :
		T * tab;
		unsigned int _length;
	public :
		Array() : tab(new T[0]), _length(0) {}
		Array( Array const & src ) : tab(new T[src._length]), _length(src._length)
		{
			for (unsigned int i(0); i < src._length ; i++)
				this->tab[i] = src.tab[i];
		}
		Array( unsigned int length ) : tab(new T[length]), _length(length)
		{
			for (unsigned int i(0); i < length; i++)
				this->tab[i] = T();
		}
		~Array() { delete [] this->tab; }

		unsigned int size() const { return(this->_length); }

		Array &operator=(Array const & to_copy)
		{
			delete[] this->tab;
			this->_length = to_copy._length;
			this->tab = new	T[this->size()];
			for (unsigned int i(0); i < this->size(); i++)
			{
				this->tab[i] = to_copy.tab[i];
			}
			return *this;
		}

		T&	operator[](unsigned int const i)
		{
			if (i < 0 || i >= this->size())
				throw	Array::OutOfRange();
			return tab[i];
		}

		class OutOfRange : public std::exception
		{
			public :
				virtual const char * what() const throw() { return("OutOfRange!\n"); }
		};
};
