/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:32 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/09 17:42:34 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* **********constructors********** */

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor is called" << std::endl;
}

/* **********destructor********** */

Dog::~Dog()
{
	std::cout << "Dog is destroyed" << std::endl;
}

/* **********operator********** */

Dog &Dog::operator=(Dog const &rhs)
{
	this->Animal::operator=(rhs);
	return (*this);
}

/* **********member functions********** */

void    Dog::makeSound(void) const
{
	std::cout << "WOOF! " << std::endl;
}