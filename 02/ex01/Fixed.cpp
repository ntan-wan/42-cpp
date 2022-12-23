/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:07:32 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/23 10:30:52 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::m_fractBits = 8;

Fixed::Fixed(): m_fixPtValue(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int Constructor called" << std::endl;
	this->m_fixPtValue = value << this->m_fractBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float Constructor called" << std::endl;
	this->m_fixPtValue = roundf(value * (1 << this->m_fractBits));

}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->m_fixPtValue = src.getRawBits();

	return (*this);
}

float	Fixed::toFloat(void)const
{
	return ((float)this->m_fixPtValue / (float)(1 << this->m_fractBits));
}

int	Fixed::toInt(void)const
{
	return (this->m_fixPtValue >> this->m_fractBits);
}

int	Fixed::getRawBits(void)const
{
	return (this->m_fixPtValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->m_fixPtValue = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}