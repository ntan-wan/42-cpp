/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:52:08 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/23 09:57:46 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int         		m_fixPtValue;
	static const int	m_fractBits;
public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed(const int value);
	Fixed(const float value);
	
	~Fixed();

	Fixed	&operator=(Fixed const &copy);

	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	
	int		toInt(void) const;
	float	toFloat(void) const;

	bool operator>(Fixed fixed)const;
	bool operator<(Fixed fixed)const;
	bool operator>=(Fixed fixed)const;
	bool operator<=(Fixed fixed)const;
	bool operator==(Fixed fixed)const;
	bool operator!=(Fixed fixed)const;

	float operator+(Fixed fixed)const;
	float operator-(Fixed fixed)const;
	float operator*(Fixed fixed)const;
	float operator/(Fixed fixed)const;
	
	Fixed operator++();
	Fixed operator--();

	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(Fixed const &first, Fixed const &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(Fixed const &first, Fixed const &second);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_num);

#endif