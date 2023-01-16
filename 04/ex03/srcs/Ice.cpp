/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:16:18 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 17:04:38 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//constructors

Ice::Ice()
{
	this->m_type = "ice";
	std::cout << this->m_type << " created" << std::endl;
}

Ice::Ice(Ice const &copy)
{
	this->AMateria::m_type = copy.getType();
	std::cout << this->m_type << " constructed from copy" << std::endl;
}

//destructor

Ice::~Ice()
{
	std::cout << this->m_type << " destroyed" << std::endl;
}

//operator

Ice &Ice::operator=(Ice const &ref)
{
	if (this != &ref)
	{
		this->m_type = ref.getType();
		std::cout << "ice is assigned from another" << ref.getType() << std::endl;
	}
	return (*this);
}

//member functions

Ice	*Ice::clone(void) const
{
	return (new Ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}

//getter

std::string const &Ice::getType(void) const
{
	return (this->m_type);
}