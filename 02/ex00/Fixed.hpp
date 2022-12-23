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

class Fixed
{
private:
	int         		m_fixPtValue;
	static const int	m_fractBits;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &copy);
	int 	getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed	&operator=(Fixed const &copy);
};
#endif