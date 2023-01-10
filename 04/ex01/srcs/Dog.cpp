/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:21:32 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/10 11:34:28 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* **********constructors********** */

Dog::Dog() : Animal("Dog")
{
	this->m_brain = new Brain();
	std::cout << "Dog is created" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	this->m_brain = new Brain(*src.getBrain());
	std::cout << "Dog copy constructor is called" << std::endl;
}

/* **********destructor********** */

Dog::~Dog()
{
	delete this->m_brain;
	std::cout << "Dog is destroyed" << std::endl;
}

/* **********operator********** */

Dog &Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		this->~Dog();
		this->m_brain = new Brain(*rhs.getBrain());
		this->Animal::operator=(rhs);
	}
	return (*this);
}

/* **********member functions********** */

void    Dog::makeSound(void) const
{
	std::cout << "WOOF! " << std::endl;
}

/* **********getter********** */

Brain	*Dog::getBrain(void) const
{
	return (this->m_brain);
}