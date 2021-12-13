/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:15:21 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/10 16:30:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();


		Brain &		operator=( Brain const & rhs );

		std::string getIdeas(int index);
		void	setIdeas(std::string an_idea, int index);

	private:
		std::string _ideas[100];

};

#endif /* *********************************************************** BRAIN_H */
