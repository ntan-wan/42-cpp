/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:28:35 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/10 11:25:23 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* **********constructors********** */

Cat::Cat() : Animal("Cat")
{
    this->m_brain = new Brain();
    std::cout << "Cat is created" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
    this->m_brain = new Brain(*src.getBrain());
    std::cout << "Cat copy constructor is called" << std::endl;
}

/* *********destructor********** */

Cat::~Cat()
{
    delete this->m_brain;
    std::cout << "Cat is destroyed" << std::endl;
}

/* **********operator********** */

Cat &Cat::operator=(const Cat &rhs)
{
    if (this != &rhs)
    {
        this->~Cat();
        this->m_brain = new Brain(*rhs.getBrain());
        this->Animal::operator=(rhs);
    }
    return (*this);
}

/* **********member functions********** */

void    Cat::makeSound(void) const
{
    std::cout << "MEOW! " << std::endl;
}

/* **********getter********** */

Brain   *Cat::getBrain(void) const
{
    return (this->m_brain);
}