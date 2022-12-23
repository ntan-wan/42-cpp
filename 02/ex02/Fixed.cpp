/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:07:32 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/22 21:01:31 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fracBit_ = 8;

Fixed::Fixed(): value_(0)
{
	// std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	// std::cout << "Int Constructor called" << std::endl;
	this->value_ = input << this->fracBit_;
}

Fixed::Fixed(const float input)
{
	// std::cout << "Float Constructor called" << std::endl;
	this->value_ = roundf(input * (1 << this->fracBit_));
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
		this->value_ = src.getRawBits();

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
	this->value_++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->value_--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++this->value_;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--this->value_;
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
	return ((float)this->value_ / (float)(1 << this->fracBit_));
}

int	Fixed::toInt(void)const
{
	return (this->value_ >> this->fracBit_);
}

int	Fixed::getRawBits(void)const
{
	return (this->value_);
}

void	Fixed::setRawBits(int const raw)
{
	this->value_ = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}