/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 21:59:17 by eugene        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>

// npos failure
void	replaceString(std::ifstream &infile, std::ofstream &outfile, const std::string &s1, const std::string &s2)
{
	std::string		line;
	
	while (std::getline(infile, line))
	{
		size_t	posCurrent = 0;

		while (1)
		{
			size_t	posFound = line.find(s1, posCurrent);
			if (posFound != std::string::npos)
			{
				line.replace(posFound, s1.length(), s2);
				posCurrent = posFound + s2.length();
			}
			else
				break ;
		}
		outfile << line << std::endl;
	}
}

void	replaceSed(const std::string &in, const std::string &s1, const std::string &s2)
{
	if (in.empty() || s1.empty() || s2.empty())
		throw (std::runtime_error("Invalid argument"));

	std::ifstream	infile;
	infile.open(in);
	if (!infile)
		throw (std::runtime_error("Can't open input file"));

	const std::string		out = in + ".replace";
	std::ofstream			outfile;

	outfile.open(out);
	if (!outfile)
	{
		infile.close();
		throw (std::runtime_error("Can't create output file"));
	}
	replaceString(infile, outfile, s1, s2);

	infile.close();
	outfile.close();
}

int		main(int argc, char **argv)
{
	try
	{
		if (argc != 4)
			throw (std::runtime_error("Invalid input"));
		replaceSed(argv[1], argv[2], argv[3]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
