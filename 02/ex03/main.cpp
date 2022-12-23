/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:32:12 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/23 09:11:59 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define COLOR_OFF "\033[0m"

bool bsp(const Point a, const Point b, const Point c, const Point point);

void	util_print_point(const Point &point, std::string name)
{
	std::cout << "Point " << name << "(" << point << ") " << std::endl;
}

void	util_print_result(const Point &a, const Point &b, const Point &c, const Point &point)
{
	if (bsp(a, b, c, point) == true)
		std::cout << "Point is inside the triangle: " << GREEN << "TRUE" << COLOR_OFF << std::endl;
	else
		std::cout << "Point inside the triangle: " << RED << "FALSE\033[0m" << COLOR_OFF << std::endl;
}

int main(void)
{
	{
		const Point a;
		const Point b(10, 0);
		const Point c(0, 10);
		const Point point(1, 1);

		util_print_point(a, "a");
		util_print_point(b, "b");
		util_print_point(c, "c");
		util_print_point(point, "");
		util_print_result(a, b, c, point);
	}
	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;
	{
		Point a(-1.5, -1.5);
		Point b(2.5, 2.5);
		Point c(-1, -2);
		Point point(8.5, -9);

		util_print_point(a, "a");
		util_print_point(b, "b");
		util_print_point(c, "c");
		util_print_point(point, "");
		util_print_result(a, b, c, point);
	}
	return (0);
}