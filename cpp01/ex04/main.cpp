/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: smclacke <smclacke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/03/24 17:06:27 by smclacke      #+#    #+#                 */
/*   Updated: 2024/04/14 23:59:06 by SarahLouise   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>

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
	std::string	line;

	while (std::getline(infile, line))
	{
		if (line.compare(s1) == 0)
			outfile << s2 << std::endl;
		else
			outfile << s1 << std::endl;
		line.clear();
	}

	infile.close();
	outfile.close();
	return (0);
}
