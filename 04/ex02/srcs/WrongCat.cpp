/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:33:54 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/09 21:52:55 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->m_type = "WrongCat";
	std::cout << this->m_type << " is created" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	*this = src;
}
WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	this->WrongAnimal::operator=(copy);
	return (*this);
}
WrongCat::~WrongCat()
{
	std::cout << this->m_type << " is destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "MeeeeW!" << std::endl;
}