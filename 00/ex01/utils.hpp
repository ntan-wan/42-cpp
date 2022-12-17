/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 10:20:53 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/17 15:08:28 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>

# define RED "\033[1;31m"
# define BLUE "\033[1;34m"
# define GREEN "\033[32m"
# define COLOR_OFF "\033[0m"

void    utils_put_dashes(int count);
void	utils_clear_screen(void);
void	utils_clear_input_stream(void);
bool	utils_is_empty_line(std::string line);
void    utils_put_colored_text(std::string color, std::string text);
#endif