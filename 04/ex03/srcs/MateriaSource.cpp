/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 12:04:27 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 12:05:31 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//constructors

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = 0;
	std::cout << "MateriaSource was created" << std::endl;;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < 4; i++) 
	{
		if (copy.m_inventory[i])
			this->m_inventory[i] = (copy.m_inventory[i])->clone();
	}
	std::cout << "MateriaSource was created from copy" << std::endl;
}

//operator

MateriaSource &MateriaSource::operator=(MateriaSource const &ref)
{
	for(int i = 0; i < 4; i++)    
	{
		if (this->m_inventory[i])
			delete this->m_inventory[i];
		if (ref.m_inventory[i])
			this->m_inventory[i] = (ref.m_inventory[i])->clone();
	}
	return (*this);
}

//destructor

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_inventory[i])
			delete this->m_inventory[i];
	}
	std::cout << "MateriaSource was destoyed" << std::endl;
}

//member functions

void	MateriaSource:: learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_inventory[i])
			continue ;
		else
		{
			(this->m_inventory)[i] = m;
			std::cout << "MateriaSource learned " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource can't learn more than 4 Materia" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if ((this->m_inventory[i])->getType() != type)
			continue ;
		else
		{
			std::cout << "MateriaSource creating " << type << std::endl;
			return (((this->m_inventory)[i])->clone());
		}
	}
	std::cout << "MateriaSource does not found " << type << std::endl;
	return (NULL);
}