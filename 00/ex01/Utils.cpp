/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:19:20 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/18 13:25:13 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

void	Utils::clear_input_stream(void)
{
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void	Utils::clear_screen(void)
{
	std::cout << "\033[1;1H\033[2J";
}

/* 
	Draw N count of dashes.
 */
void	Utils::put_dashes(int count)
{
	std::string	dash(count, '-');
	std::cout << dash  << std::endl;
}

void	Utils::put_colored_text(std::string color, std::string text)
{
	std::cout << color << text << COLOR_OFF << std::endl;
}

static bool is_spaces_only(std::string line)
{
	for (size_t i = 0; i < line.length(); i++)
	{
		if (line[i] != ' ' && line[i] != '\t')
			return (false);
	}
	return (true);
}

bool	Utils::is_empty_line(std::string line)
{
	if (line.empty() || is_spaces_only(line))
		return (true);
	return (false);
}
