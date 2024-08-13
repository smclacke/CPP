/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/13 20:13:42 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

static void	printArgs(char **args)
{
	std::cout << "Before:  ";
	for (size_t i = 1; args[i]; i++)
	{
		for (size_t j = 0; args[i][j]; j++)
		{
			std::cout << args[i][j];
		}
		std::cout << " ";
	}
	std::cout << "\n";
}

static int	jacobsthal(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

// ------------------------------------vector------------------------------------ //


static void sortVec(std::vector<int> &vec)
{
	int	struggler = -1;

	if (vec.size() % 2 != 0)
	{
		struggler = vec.back();
		vec.pop_back();
	}

	std::list<std::pair<int, int>>	pairs;
	pairs = makePairs(vec);
	
	std::vector<int>	sorted;
	std::vector<int>	add;

	for (auto &pair : pairs)
	{
		sorted.push_back(pair.first);
		add.push_back(pair.second);
	}
	
	mergeSort(sorted, add);

	if (struggler != -1)
	{
		auto it = std::lower_bound(vec.begin(), vec.end(), struggler);
		vec.insert(it, struggler);
	}
}


// // ------------------------------------deque------------------------------------ //

static void sortDeque(std::deque<int> &deque)
{
	int	struggler = -1;

	if (deque.size() % 2 != 0)
	{
		struggler = deque.back();
		deque.pop_back();
	}

	std::list<std::pair<int, int>>	pairs;
	pairs = makePairs(deque);
	
	std::deque<int>	sorted;
	std::deque<int>	add;

	for (auto &pair : pairs)
	{
		sorted.push_back(pair.first);
		add.push_back(pair.second);
	}
	
	mergeSort(sorted, add);

	if (struggler != -1)
	{
		auto it = std::lower_bound(deque.begin(), deque.end(), struggler);
		deque.insert(it, struggler);
	}
}

int	sortNums(char **args, std::vector<int> &vec, std::deque<int> &deque)
{
	auto	startVec = std::chrono::high_resolution_clock::now();
	if (!convertContain(args, vec))
		return 1;
	sortVec(vec);
	auto	endVec = std::chrono::high_resolution_clock::now();
	auto	durationVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count();

	auto	startDeque = std::chrono::high_resolution_clock::now();
	if (!convertContain(args, deque))
		return 1;
	sortDeque(deque);
	auto	endDeque = std::chrono::high_resolution_clock::now();
	auto	durationDeque = std::chrono::duration_cast<std::chrono::microseconds>(endDeque - startDeque).count();

	printArgs(args);
	int amount = printNums(vec);

	std::cout << "Time to process a range of " << amount << " elements with std::vector : " << durationVec << " us" << std::endl;
	std::cout << "Time to process a range of " << amount << " elements with std::deque : " << durationDeque << " us" << std::endl;

	return 0;
}
