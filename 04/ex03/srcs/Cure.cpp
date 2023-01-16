/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:22:26 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 17:05:36 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

//constructors

Cure::Cure()
{
    this->m_type = "cure";
    std::cout << this->m_type << " created" << std::endl;
}

Cure::Cure(Cure const &copy)
{
    this->AMateria::m_type = copy.getType();
    std::cout << this->m_type << " constructed from copy" << std::endl;
}

//destructor

Cure::~Cure()
{
    std::cout << this->m_type << " destroyed" << std::endl;
}

//operator

Cure &Cure::operator=(const Cure &ref)
{
    std::cout << "cure is assigned from another " << ref.getType() << std::endl;
    return (*this);
}

Cure    *Cure::clone() const
{
    return (new Cure);
}

void    Cure::use(ICharacter &target)
{
    std::cout << " heals " << target.getName() << "\'s wounds " << std::endl;
}

//getter

std::string const &Cure::getType(void) const
{
    return (this->m_type);
}