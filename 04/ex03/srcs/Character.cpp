/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:09:30 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 18:14:01 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//constructors

Character::Character(std::string name) : m_name(name)
{
	std::cout << "A character named \"" << this->m_name << "\" was created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = 0;
}

Character::Character(const Character &copy) : m_name(copy.getName() + "_copy")
{
	for (int i = 0; i < 4; i++)
	{
		if ((copy.m_inventory)[i])
			(this->m_inventory)[i] = (copy.m_inventory[i])->clone();
		else
			(this->m_inventory)[i] = 0;
	}
	std::cout << "A character named " << m_name << " was created from copy of " << copy.m_name << std::endl;
}

//operator

Character &Character::operator=(Character const &ref)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_inventory[i])
			delete this->m_inventory[i];
		if (ref.m_inventory[i])
			this->m_inventory[i] = (ref.m_inventory[i])->clone();
	}
	std::cout << ref.getName() << " is assigned to " << this->getName() << std::endl;
	return (*this);
}

//destructor

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->m_inventory[i])
			delete (this->m_inventory)[i];
	}
	std::cout << "Character named " << this->m_name << " was destroyed" << std::endl;
}

//member functions

void    Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << this->m_name << " tried to equip nothing" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->m_inventory[i])
			continue ;
		else
		{
			(this->m_inventory)[i] = m;
			std::cout << this->m_name << " equipped materia " << m->getType() << " in inventory slot " << i << std::endl;
			return ;
		}
	}
	std::cout << this->m_name << " can't equip more than 4 Materia" << std::endl;;
}

void    Character::unequip(int idx)
{
	AMateria	*materia;

	if (idx < 0 || idx >= 4 || !(this->m_inventory)[idx])
		std::cout << this->m_name << " unequipped nothing at slot " << idx << std::endl;
	else
	{
		materia = (this->m_inventory)[idx];
		std::cout << this->m_name << " unequipped " << materia->getType() << " at slot " << idx << std::endl;
		this->m_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	std::cout << this->getName();
	if (idx < 0 || idx >= 4 || !(this->m_inventory)[idx])
	{
		std::cout << " found nothing to use at index " << idx << std::endl;
		return ;
	}
	((this->m_inventory)[idx])->use(target);
}

//getter

AMateria	*Character::getMateria(int idx)
{
	return (this->m_inventory[idx]);
}

std::string	const &Character::getName() const
{
	return (this->m_name);
}