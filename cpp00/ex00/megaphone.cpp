/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:05:18 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/15 14:05:19 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    play_loud_noise(void)
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

void    print_uppercase(std::string str)
{
	for(int i = -1; str[++i];)
		std::cout << (char)std::toupper(str[i]);
}

void	print_spaces(int ac, int index)
{
	int	last_index;

	last_index = ac - 1;
	if (index != last_index)
		std::cout << " ";
	else
		std::cout << std::endl;
}

void    play_megaphone(int ac, char **av)
{
	for (int i = 0; av[++i];)
	{
		print_uppercase(av[i]);
		print_spaces(ac, i);
	}
}

int main(int ac, char **av)
{
	if (ac == 1)
		play_loud_noise();
	else
		play_megaphone(ac, av);
	return (0);
}