/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:07:32 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/28 23:25:09 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int   Fixed::m_fractBits = 8;

Fixed::Fixed() : m_fixPtValue(0)
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
    this->m_fixPtValue = copy.getRawBits();
    return (*this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->m_fixPtValue);
}

void    Fixed::setRawBits(const int raw)
{
    this->m_fixPtValue = raw;
}