/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:52:08 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/22 09:02:03 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int         		value_;
	static const int	fracBit_;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &copy);
	Fixed(const int value);
	Fixed(const float value);
	Fixed	&operator=(Fixed const &copy);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_num);
#endif