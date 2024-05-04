/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/04 16:38:45 by smclacke      #+#    #+#                 */
/*   Updated: 2024/05/04 16:54:23 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>


class	Brain
{
	private:
		std::string		_ideas[100];
	
	public:
		Brain();
		Brain(const Brain &copy);
		Brain	&operator=(const Brain &copy);
		~Brain();

	void			setIdea(std::string idea, int i);
	std::string		getIdeas(unsigned int i);
};

#endif
