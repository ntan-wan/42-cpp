/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:10:47 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/23 09:08:55 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Fixed.hpp"

class	Point
{
private:
	const Fixed	x_;
	const Fixed y_;
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &copy);

	~Point();

	Point &operator=(const Point &src);

	const Fixed &getX(void)const;
	const Fixed &getY(void)const;
};

std::ostream	&operator<<(std::ostream &o, Point const point);