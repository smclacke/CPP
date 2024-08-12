/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/12 21:29:53 by smclacke      ########   odam.nl         */
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

static int	jacobsthalSequence(int n)
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

static void		listLargeSort(std::list<int> &sortedList, std::list<int> &addList)
{
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
}

static void	listSort(std::list<int> &list)
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
	
	listLargeSort(sortedList, addList);

	if (struggler != -1)
		listSearchPairs(sortedList, sortedList.begin(), sortedList.end(), struggler);

	list = sortedList;
}



// vector
static void	vectorSortPairs(std::vector<std::pair<int, int>> &pairs, size_t startPos)
{
	if (startPos == pairs.size() - 1)
		return ;

	for (size_t it = startPos + 1; it < pairs.size(); ++it)
	{
		if (!comparePairs(pairs[startPos], pairs[it]))
			std::swap(pairs[startPos], pairs[it]);
	}
	vectorSortPairs(pairs, startPos + 1);

}

static std::vector<std::pair<int, int>>	vectorMakePairs(std::vector<int> &vec, std::vector<std::pair<int, int>> &pairs)
{
	size_t	sizeVec = vec.size();

	for (size_t i = 0; i < sizeVec; i += 2)
	{
		int first = vec[i];
		int second = vec[i + 1];
		pairs.push_back(std::make_pair(std::max(first, second), std::min(first, second)));
	}

	size_t	startPos = 0;
	vectorSortPairs(pairs, startPos);
	return pairs;
}

static void	vectorSearchPairs(std::vector<int> &sortedVector, int start, int len, int value)
{
	if (start == len || start >= len)
	{
		sortedVector.insert(sortedVector.begin() + start, value);
		return ;
	}
	
	auto middle = start + (len - start) / 2;

	if (sortedVector[middle] < value)
		vectorSearchPairs(sortedVector, middle + 1, len, value);
	else if (sortedVector[middle] > value)
		vectorSearchPairs(sortedVector, start, middle, value);
	else
	{
		sortedVector.insert(sortedVector.begin() + middle, value);
		return ;
	}
}

static void	vectorLargeSort(std::vector<int> &sortedVector, std::vector<int> &addVector)
{
	int		i = 1;
	int		j = 1;
	int		sizeVec = addVector.size();
	
	sortedVector.insert(sortedVector.begin(), addVector.front());

	while (i < sizeVec)
	{
		for (int jac = jacobsthalSequence(j); jac > 0 && jac > jacobsthalSequence(j - 1); --j)
		{
			auto it = addVector.begin();
			if (jac >= sizeVec)
				jac = sizeVec - 1;
			std::advance(it, jac);

			vectorSearchPairs(sortedVector, 0, sortedVector.size(), *it);
			++i;
		}
		++j;
	}
}

static void	vectorSort(std::vector<int> &vec)
{
	int	struggler = -1;
	
	if (vec.size() % 2 != 0)
	{
		struggler = vec.back();
		vec.pop_back();
	}

	std::vector<std::pair<int, int>> pairs;
	pairs = vectorMakePairs(vec, pairs);
	
	std::vector<int>	sortedVector;
	std::vector<int>	addVector;

	for (auto &pair : pairs)
	{
		sortedVector.push_back(pair.first);
		addVector.push_back(pair.second);
	}

	vectorLargeSort(sortedVector, addVector);

	if (struggler != -1)
		vectorSearchPairs(sortedVector, 0, sortedVector.size(), struggler);

	vec = sortedVector;
}


void	sortNums(std::vector<int> &vec, std::list<int> &list)
{
	auto	startVec = std::chrono::high_resolution_clock::now();
	vectorSort(vec);
	auto	endVec = std::chrono::high_resolution_clock::now();
	auto	durationVec = std::chrono::duration_cast<std::chrono::microseconds>(endVec - startVec).count();

	auto	startList = std::chrono::high_resolution_clock::now();
	listSort(list);
	auto	endList = std::chrono::high_resolution_clock::now();
	auto	durationList = std::chrono::duration_cast<std::chrono::microseconds>(endList - startList).count();

	// int amount = printNums(list, 2);
	int amount = printNums(vec, 2);

	std::cout << "Time to process a range of " << amount << " elements with std::vector : " << durationVec << " us" << std::endl;
	std::cout << "Time to process a range of " << amount << " elements with std::list : " << durationList << " us" << std::endl;

}


