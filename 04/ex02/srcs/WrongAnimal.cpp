/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:58:00 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/09 21:48:29 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->m_type = "Wrong Animal";
	std::cout << this->m_type << " is created" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	std::cout << "WrongAnimal copy constructor is called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->m_type = rhs.m_type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << this->m_type << " is destroyed" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->m_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Moooooooooo! " << std::endl;
}