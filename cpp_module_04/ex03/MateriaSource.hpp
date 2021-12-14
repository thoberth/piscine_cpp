/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:27:52 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/14 12:32:09 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	private:
		AMateria *_learn[4];
	public:
		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

		MateriaSource &		operator=( MateriaSource const & rhs );
};

#endif /* *************************************************** MATERIASOURCE_H */
