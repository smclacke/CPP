/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: eugene <eugene@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/14 22:04:34 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 21:24:50 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif
