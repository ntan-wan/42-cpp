/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:20:40 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 16:36:13 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//constructors

AMateria::AMateria()
{
    this->m_type = "";
    std::cout << "AMateria has been created" << std::endl;;
}

AMateria::AMateria(std::string const &type) : m_type(type)
{
    std::cout << "AMateria " << this->m_type << " been created" << std::endl;;

}

AMateria::AMateria(AMateria const &copy) : m_type(copy.m_type)
{
    std::cout << "AMateria has been created from a copy" << std::endl;
}

//destructor

AMateria::~AMateria()
{
    std::cout << "AMateria has been destroyed" << std::endl;
}

//member functionss

void    AMateria::use(ICharacter &target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}

//getter

std::string const &AMateria::getType() const
{
    return (this->m_type);
}