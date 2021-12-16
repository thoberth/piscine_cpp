/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:02:29 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/16 17:38:51 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{
	public:
		Form();
		~Form();
	
		std::string getName() const;
		bool		getSigned() const;
		int			getToSign() const;
		int			getToExec() const;

	private:
		std::string const _name;
		bool 			_signed;
		int			const _toSign;
		int			const _toExec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */
