/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:55:15 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 11:39:02 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int     size;
    Zombie  *horde;
    
    size = 10;
    horde = zombieHorde(size, "Zoman");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}