/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:36 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 17:43:50 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <cctype> // need?
# include <algorithm>
# include <vector>
# include <deque>

// methods

bool	convertNums(char **argv, std::vector<int> &vec, std::deque<int> &deq);
// void	sortNums(std::vector<int> &vec, std::deque<int> &deq);



#endif
