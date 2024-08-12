/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 20:47:54 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "../include/PmergeMe.hpp"

bool	convertNums(char **args, std::vector<int> &vec, std::list<int> &list)
{
	for (size_t i = 1; args[i]; i++)
	{
		if (!convertContain(args[i], vec))
			return false;
		if (!convertContain(args[i], list))
			return false;
	}
	printNums(list, 1);
	return true;
}

static int		jacobsthalSequence(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int	previous = 0;
	int	current = 1;
	for (int i = 2; i < n; ++i)
	{
		int	next = current + 2 * previous;
		previous = current;
		current = next;
	}
	return current;
}

static bool	comparePairs(std::pair<int, int> &firstPair, std::pair<int, int> &secondPair)
{
	return firstPair.first < secondPair.first;
}


// list
static void	listSortPairs(std::list<std::pair<int, int>> &pairs, std::list<std::pair<int, int>>::iterator startPos)
{
	if (startPos == std::prev(pairs.end()))
		return ;

	for (std::list<std::pair<int,int>>::iterator it = std::next(startPos); it != pairs.end(); it++)
	{
		if (!comparePairs(*startPos, *it))
			std::iter_swap(startPos, it);
	}
	listSortPairs(pairs, std::next(startPos));
}

static std::list<std::pair<int, int>>	listMakePairs(std::list<int> &list, std::list<std::pair<int, int>> &pairs)
{
	std::list<int>::iterator it = list.begin();
	while (it != list.end())
	{
		int	first = *it;
		++it;
		int	second = *it;
		++it;
		pairs.push_back(std::make_pair(std::max(first, second), std::min(first, second)));
	}

	auto	startPos = pairs.begin();
	listSortPairs(pairs, startPos);

	return pairs;
}

static void	listSearchPairs(std::list<int> &sortedList, std::list<int>::iterator start, std::list<int>::iterator len, int value)
{
	if (start == len || *start >= value)
	{
		sortedList.insert(start, value);
		return ;
	}
	
	auto middle = std::next(start, std::distance(start, len) / 2);

	if (*middle < value)
		listSearchPairs(sortedList, std::next(middle), len, value);
	else if (*middle > value)
		listSearchPairs(sortedList, start, middle, value);
	else
	{
		sortedList.insert(middle, value);
		return ;
	}
}

static std::list<int>	listSort(std::list<int> &list)
{
	int	struggler = -1;

	if (list.size() % 2 != 0)
	{
		struggler = list.back();
		list.pop_back();
	}
	
	std::list<std::pair<int, int>> pairs;
	pairs = listMakePairs(list, pairs);

	std::list<int>	sortedList;
	std::list<int>	addList;
	
	for (auto &pair : pairs)
	{
		sortedList.push_back(pair.first);
		addList.push_back(pair.second);
	}
	
	int	i = 1;
	int	j = 1;
	int	length = addList.size();
	
	sortedList.push_front(addList.front());
	while (i < length)
	{
		for (int jac = jacobsthalSequence(j); jac > 0 && jac > jacobsthalSequence(j - 1); --j)
		{
			auto it = addList.begin();
			if (jac >= length)
				jac = length -1;
			std::advance(it, jac);

			listSearchPairs(sortedList, sortedList.begin(), sortedList.end(), *it);
			++i;
		}
		++j;
	}
	if (struggler != -1)
		listSearchPairs(sortedList, sortedList.begin(), sortedList.end(), struggler);

	return sortedList;
}

// vector


void	sortNums(std::vector<int> &vec, std::list<int> &list)
{
	std::list<int>		resultList;
	// std::vector<int>		resultVector;
	auto	startVec = std::chrono::high_resolution_clock::now();
	// resultVector = vectorSort(vec);
	auto	endVec = std::chrono::high_resolution_clock::now();
	auto	durationVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count();

	auto	startList = std::chrono::high_resolution_clock::now();
	resultList = listSort(list);
	auto	endList = std::chrono::high_resolution_clock::now();
	auto	durationList = std::chrono::duration_cast<std::chrono::microseconds>(endList - startList).count();

	int amount = printNums(resultList, 2);

	std::cout << "Time to process a range of " << amount << " elements with std::vector : " << durationVec << " us" << std::endl;
	std::cout << "Time to process a range of " << amount << " elements with std::list : " << durationList << " us" << std::endl;

}


