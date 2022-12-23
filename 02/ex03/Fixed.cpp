/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:07:32 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/23 09:57:46 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::m_fractBits = 8;

Fixed::Fixed(): m_fixPtValue(0)
{
	// std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	// std::cout << "Int Constructor called" << std::endl;
	this->m_fixPtValue = input << this->m_fractBits;
}

Fixed::Fixed(const float input)
{
	// std::cout << "Float Constructor called" << std::endl;
	this->m_fixPtValue = roundf(input * (1 << this->m_fractBits));
}

Fixed::Fixed(const Fixed &copy)
{
	// std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	// std::cout << "Deconstructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->m_fixPtValue = src.getRawBits();

	return (*this);
}

bool	Fixed::operator>(Fixed fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool	Fixed::operator<(Fixed fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool	Fixed::operator>=(Fixed fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool	Fixed::operator<=(Fixed fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool	Fixed::operator==(Fixed fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool	Fixed::operator!=(Fixed fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

float	Fixed::operator+(Fixed fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}

Fixed	Fixed::operator++()
{
	this->m_fixPtValue++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->m_fixPtValue--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++this->m_fixPtValue;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--this->m_fixPtValue;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
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