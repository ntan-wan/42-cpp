/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:43:27 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 17:04:57 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#define SUCCESS 0
#define FAILED 1
#define REQUIRED_INPUTS 4

static std::string get_content(std::ifstream &infile)
{
	char	c;
	t_str	content;

	while (!infile.eof() && infile >> std::noskipws >> c)
		content += c;
	return (content);
}

static bool	is_files_error(std::ifstream &infile, std::ofstream &outfile)
{
	if (infile.fail())
	{
		std::cout << "Err: no such file or directory" << std::endl;
		return (true);
	}
	else if (outfile.fail())
	{
		std::cout << "Err: output file failed to open" << std::endl;
		return (true);
	}
	return (false);
}

static void	free_resources(std::ifstream &infile, std::ofstream &outfile)
{
	infile.close();
	outfile.close();
}

int	main(int ac, char **av)
{
	std::ifstream	infile(av[1]);
	std::ofstream	outfile((std::string(av[1]) + ".replace").c_str());

	if (ac != REQUIRED_INPUTS)
	{
		std::cout << "usage: ./replace <filename> <old word> <new word>" << std::endl;
		return (FAILED);
	}
	else if (is_files_error(infile, outfile))
		return (FAILED);
	else
	{
		outfile << replace(get_content(infile), av[2], av[3]);
		free_resources(infile, outfile);
	}
	return (SUCCESS);
}