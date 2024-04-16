/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/16 16:44:26 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/16 16:45:15 by smclacke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>

void	replaceString(std::ifstream &infile, std::string s1, std::string s2, std::ofstream &outfile)
{
	std::string	line;

	while (std::getline(infile, line))
	{
		size_t	posCurrent = 0;
		while (true)
		{
			size_t	posFound = line.find(s1, posCurrent);
			if (posFound != std::string::npos)
			{
				line.erase(posFound, s1.length());
				line.insert(posFound, s2);
				posCurrent = posFound + s2.length();
			}
			else
				break ;
		}
		outfile << line << std::endl;	
	}
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid input" << std::endl;
		return (1);
	}

	std::ifstream 	infile;
	infile.open(argv[1]);
	if (!infile)
	{
		std::cout << "Couldn't open input file" << std::endl;
		return (1);
	}

	std::string		outName = argv[1];
	outName.append(".replace");

	std::ofstream	outfile;
	outfile.open(outName);
	if (!outfile)
	{
		infile.close();
		std::cout << "Couldn't create outfile" << std::endl;
		return (1);
	}
	
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (s1.empty() || s2.empty())
	{
		infile.close();
		outfile.close();
		std::cout << "Strings can't be empty!" << std::endl;
		return (1);
	}

	replaceString(infile, s1, s2, outfile);

	infile.close();
	outfile.close();
	return (0);
}