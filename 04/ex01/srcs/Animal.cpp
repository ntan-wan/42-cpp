/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:48:25 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/09 17:59:03 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* **********Constructors********** */

Animal::Animal()
{
	this->m_type = "";
	std::cout << "Animal is created" << std::endl;
}

Animal::Animal(std::string type)
{
	this->m_type = type;
	std::cout << "Animal " << this->m_type << " is created" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
	std::cout << "Animal " << this->m_type << " is copied" << std::endl;
}

/* **********Destructor********** */

Animal::~Animal()
{
	std::cout << "Animal " << this->m_type << " is destroyed" << std::endl;
}

/* **********operator********** */

Animal &Animal::operator=(const Animal &rhs)
{
	this->m_type = rhs.m_type;
	std::cout << "Animal assign operator is called" << std::endl;
	return (*this);
}

/* **********setter********** */

void	Animal::setType(std::string type)
{
	this->m_type = type;
}

/* **********getter********** */

std::string	Animal::getType(void) const
{
	return (this->m_type);
}

/* **********member functions********** */

void	Animal::makeSound(void) const
{
	std::cout << "Animal " << this->m_type << "make noises" << std::endl;
}