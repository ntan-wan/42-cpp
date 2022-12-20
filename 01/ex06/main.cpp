/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 08:47:52 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/20 09:47:51 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#define	REQUIRED_AC 2

int	harl_translate(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			return (i);
	return (-1);
}


/* 
	"//fallthrough" tells the compiler the fall through is intentional.
 */
void	harl_filter(Harl &harl, std::string level)
{
	switch (harl_translate(level))
	{
		case debug:
			harl.complain("DEBUG");
			//fallthrough
		case info:
			harl.complain("INFO");
			//fallthrough
		case warning:
			harl.complain("WARNING");
			//fallthrough
		case error:
			harl.complain("ERROR");
			break ;
		default :
		std::cout << "[ Probably complaining about insignificant problems ]" \
		<< std::endl;
	}
}	

int main(int ac, char **av)
{
	Harl	harl;
	
	if (ac == REQUIRED_AC)	
		harl_filter(harl, av[1]);
	else
		std::cout << "usage: ./harlFilter <level>" << std::endl;
	return (0);
}

