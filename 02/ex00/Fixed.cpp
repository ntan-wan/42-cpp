/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:07:32 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/21 18:56:16 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int   Fixed::fracBit_ = 8;

Fixed::Fixed() : value_(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed   &Fixed::operator=(Fixed const &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value_ = copy.getRawbits();
    return (*this);
}

int     Fixed::getRawbits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value_);
}

void    Fixed::setRawBits(const int raw)
{
    this->value_ = raw;
}