/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:32:12 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/21 18:33:58 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed   a;
    Fixed   b(a);
    Fixed   c;

    c = b;
    std::cout << a.getRawbits() << std::endl;
    std::cout << b.getRawbits() << std::endl;
    std::cout << c.getRawbits() << std::endl;
    return (0);
}