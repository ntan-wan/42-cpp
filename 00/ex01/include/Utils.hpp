/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:20:53 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/27 13:59:19 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include <limits>

# define RED "\033[1;31m"
# define BLUE "\033[1;34m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

class Utils
{
public:
	static bool	is_empty_line(std::string line);
	static void	clear_screen(void);
	static void	clear_input_stream(void);
	static void	put_dashes(int count);
	static void	put_colored_text(std::string color, std::string text);
};
#endif