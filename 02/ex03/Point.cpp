/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 08:01:00 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/23 09:11:48 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(0), y_(0)
{
}

Point::Point(const float x, const float y) : x_(x), y_(y)
{
}

Point::~Point()
{
}

Point   &Point::operator=(const Point &src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

const Fixed	&Point::getX(void)const
{
	return (this->x_);
}

const Fixed	&Point::getY(void)const
{
	return (this->y_);
}

Point::Point(const Point &copy) : x_(copy.getX()), y_(copy.getY())
{
}

std::ostream	&operator<<(std::ostream &o, Point const point)
{
	o << point.getX() << "," << point.getY();
	return (o);
}