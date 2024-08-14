/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/08/12 16:47:09 by smclacke      #+#    #+#                 */
/*   Updated: 2024/08/14 15:57:46 by smclacke      ########   odam.nl         */
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
	int	previous = 0;
	int	current = 1;

	for (int i = 2; i <= n; i++)
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


// ------------------------------------vector------------------------------------ //

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


static void	vectorInsertSort(std::vector<int> &sortedVector, int start, int len, int value)
{
	if (start == len || start >= len)
	{
		sortedVector.insert(sortedVector.begin() + start, value);
		return ;
	}
	
	auto middle = start + (len - start) / 2;

	if (sortedVector[middle] < value)
		vectorInsertSort(sortedVector, middle + 1, len, value);
	else if (sortedVector[middle] > value)
		vectorInsertSort(sortedVector, start, middle, value);
	else
	{
		sortedVector.insert(sortedVector.begin() + middle, value);
		return ;
	}
}

static void	vectorMergeSort(std::vector<int> &sortedVector, std::vector<int> &addVector)
{
	int		i = 1;
	int		j = 1;
	int		sizeVec = addVector.size();
	
	sortedVector.insert(sortedVector.begin(), addVector.front());

	while (i < sizeVec)
	{
		//
		int jac = jacobsthal(j);
		
		if (jac >= sizeVec)
			jac = sizeVec - 1;
		vectorInsertSort(sortedVector, 0, sortedVector.size(), addVector[jac]);
		++i;
		++j;
		//
		
		// orrr
		
		//
		// for (int jac = jacobsthal(j); jac > 0 && jac > jacobsthal(j - 1); --j)
		// {
		// 	auto it = addVector.begin();
		// 	if (jac >= sizeVec)
		// 		jac = sizeVec - 1;
		// 	std::advance(it, jac);

		// 	vectorInsertSort(sortedVector, 0, sortedVector.size(), *it);
		// 	++i;
		// }
		// ++j;
		//
	}
}

static void sortVec(std::vector<int> &vec)
{
	int	struggler = -1;

	if (vec.size() % 2 != 0)
	{
		struggler = vec.back();
		vec.pop_back();
	}

	std::vector<std::pair<int, int>>	pairs;
	pairs = vectorMakePairs(vec, pairs);

	std::vector<int>	sorted;
	std::vector<int>	add;

	for (auto &pair : pairs)
	{
		sorted.push_back(pair.first);
		add.push_back(pair.second);
	}
	
	vectorMergeSort(sorted, add);

	if (struggler != -1)
	{
		auto it = std::lower_bound(sorted.begin(), sorted.end(), struggler);
		sorted.insert(it, struggler);
	}
	vec = sorted;
}


// ------------------------------------deque------------------------------------ //

static void	dequeSortPairs(std::deque<std::pair<int, int>> &pairs, std::deque<std::pair<int, int>>::iterator startPos)
{
	if (startPos == std::prev(pairs.end()))
		return ;

	for (std::deque<std::pair<int,int>>::iterator it = std::next(startPos); it != pairs.end(); it++)
	{
		if (!comparePairs(*startPos, *it))
			std::iter_swap(startPos, it);
	}
	dequeSortPairs(pairs, std::next(startPos));
}

static std::deque<std::pair<int, int>>	dequeMakePairs(std::deque<int> &deque, std::deque<std::pair<int, int>> &pairs)
{
	std::deque<int>::iterator it = deque.begin();
	while (it != deque.end())
	{
		int	first = *it;
		++it;
		int	second = *it;
		++it;
		pairs.push_back(std::make_pair(std::max(first, second), std::min(first, second)));
	}

	auto	startPos = pairs.begin();
	dequeSortPairs(pairs, startPos);

	return pairs;
}

static void	dequeInsertSort(std::deque<int> &sortedDeque, std::deque<int>::iterator start, std::deque<int>::iterator len, int value)
{
	if (start == len || *start >= value)
	{
		sortedDeque.insert(start, value);
		return ;
	}
	
	auto middle = std::next(start, std::distance(start, len) / 2);

	if (*middle < value)
		dequeInsertSort(sortedDeque, std::next(middle), len, value);
	else if (*middle > value)
		dequeInsertSort(sortedDeque, start, middle, value);
	else
	{
		sortedDeque.insert(middle, value);
		return ;
	}
}

static void		dequeMergeSort(std::deque<int> &sortedDeque, std::deque<int> &add)
{
	int	i = 1;
	int	j = 1;
	int	length = add.size();
	
	sortedDeque.push_front(add.front());
	while (i < length)
	{
		for (int jac = jacobsthal(j); jac > 0 && jac > jacobsthal(j - 1); --j)
		{
			auto it = add.begin();
			if (jac >= length)
				jac = length -1;
			std::advance(it, jac);

			dequeInsertSort(sortedDeque, sortedDeque.begin(), sortedDeque.end(), *it);
			++i;
		}
		++j;
	}
}

static void sortDeque(std::deque<int> &deque)
{
	int	struggler = -1;

	if (deque.size() % 2 != 0)
	{
		struggler = deque.back();
		deque.pop_back();
	}

	std::deque<std::pair<int, int>>	pairs;
	pairs = dequeMakePairs(deque, pairs);
	
	std::deque<int>	sorted;
	std::deque<int>	add;

	for (auto &pair : pairs)
	{
		sorted.push_back(pair.first);
		add.push_back(pair.second);
	}
	
	dequeMergeSort(sorted, add);

	if (struggler != -1)
	{
		auto it = std::lower_bound(sorted.begin(), sorted.end(), struggler);
		sorted.insert(it, struggler);
	}
	deque = sorted;
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


	std::cout << "\n\n";
	printArgs(args);
	std::cout << "\n\n";
	int amount = printNums(vec);
	printNums(deque);
	std::cout << "\n\n";

	std::cout << "Time to process a range of " << amount << " elements with std::vector : " << durationVec << " us" << std::endl;
	std::cout << "Time to process a range of " << amount << " elements with std::deque : " << durationDeque << " us" << std::endl;

	return 0;
}
