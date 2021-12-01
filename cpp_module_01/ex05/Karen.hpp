/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:36:54 by thoberth          #+#    #+#             */
/*   Updated: 2021/12/01 15:16:15 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Karen();
	~Karen();

	void	complain(std::string level);
};

#endif