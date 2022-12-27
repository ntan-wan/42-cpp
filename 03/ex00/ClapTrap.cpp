/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:34:17 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/27 15:03:39 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*----------constructors----------*/

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << ": is created" << std::endl;
	this->m_name = name;
	this->m_hitpoint = 10;
	this->m_energy_point = 10;
	this->m_attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->m_name << ": is destroyed" << std::endl;
}

/* ----------member functions---------- */

void    ClapTrap::attack(const std::string &target)
{
	if (this->m_energy_point && this->m_hitpoint)
	{
		this->m_energy_point--;
		std::cout << this->m_name
			<< ": attacks " << target
			<< ", damage " << this->m_attack_damage
			<< " points" << std::endl;
	}
	else if (!this->m_energy_point)
		std::cout << this->m_name << ": no energy to attack" << std::endl;
	else if (!this->m_hitpoint)
		std::cout << this->m_name << ": is dead, can't attack" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->m_hitpoint)
	{
		if (amount > this->m_hitpoint)
			this->m_hitpoint = 0;
		else
			this->m_hitpoint -= amount;
		std::cout << this->m_name
			<< ": taken damage by " << amount << " points" << std::endl;
	}
	if (!this->m_hitpoint)
		std::cout << this->m_name << ": is dead" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->m_energy_point && this->m_hitpoint)
	{
		this->m_energy_point--;
		this->m_hitpoint += amount;
		std::cout << this->m_name
			<< ": is repaired by " << amount
			<< " points" << std::endl;
	}
	else if (!this->m_energy_point)
		std::cout << this->m_name << ": no energy to repair" << std::endl;
	else if (!this->m_hitpoint)
		std::cout << this->m_name << ": is dead, can't repair" << std::endl;
}

/* ----------setters---------- */

void	ClapTrap::setName(std::string name)
{
	std::cout << this->m_name
		<< ": name set to " << name << std::endl;
	this->m_name = name;
}

void	ClapTrap::setHitPoint(unsigned int amount)
{
	std::cout << this->m_name
		<< ": hitpoint set to " << amount << std::endl;
	this->m_hitpoint = amount;
}

void    ClapTrap::setDamage(unsigned int amount)
{
	std::cout << this->m_name
		<< ": attack damage set to " << amount << std::endl;
	this->m_attack_damage = amount;
}

void	ClapTrap::setEnergyPoint(unsigned int amount)
{
	std::cout << this->m_name
		<< ": energy point set to " << amount << std::endl;
	this->m_energy_point = amount;
}

/* ----------getters---------- */

unsigned int	ClapTrap::getHitPoint()const
{
	return (this->m_hitpoint);
}

unsigned int	ClapTrap::getDamage(void)const
{
	return (this->m_attack_damage);
}

unsigned int	ClapTrap::getEnergyPoint(void)const
{
	return (this->m_energy_point);
}

std::string	ClapTrap::getName(void)const
{
	return (this->m_name);
}

/* ----------operator overload---------- */

std::ostream	&operator<<(std::ostream &o, const ClapTrap &cp)
{
	o << CYAN << cp.getName() << RESET
		<< ": HP: " << cp.getHitPoint()
		<< ", EP: " << cp.getEnergyPoint()
		<< ", AD: " << cp.getDamage() << std::endl;
	return (o);
}