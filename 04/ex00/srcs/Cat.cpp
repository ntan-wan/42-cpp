/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:28:35 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/09 17:48:40 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* **********constructors********** */

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat is created" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    std::cout << "Cat copy constructor is called" << std::endl;
}

/* *********destructor********** */

Cat::~Cat()
{
    std::cout << "Cat is destroyed" << std::endl;
}

/* **********operator********** */
Cat &Cat::operator=(const Cat &rhs)
{
    this->Animal::operator=(rhs);
    return (*this);
}

/* **********member functions********** */

void    Cat::makeSound(void) const
{
    std::cout << "MEOW! " << std::endl;
}