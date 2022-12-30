/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:16:05 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/31 02:33:29 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* ----------constructors---------- */

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "DiamondTrap default constructor is called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{   
	this->m_name = src.m_name;
	this->ClapTrap::m_name = this->m_name + "_clap_name";
	this->m_hitpoint = src.m_hitpoint;
	this->m_energy_point = src.m_energy_point;
	this->m_attack_damage = src.m_attack_damage;
	std::cout << "DiamondTrap " << src.m_name << " copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->m_name = name;
	this->ClapTrap::m_name = this->m_name + "_clap_name";
	this->m_hitpoint = this->FragTrap::m_hitpoint;
	this->m_energy_point = this->ScavTrap::m_energy_point;
	this->m_attack_damage = this->FragTrap::m_attack_damage;
	std::cout << "DiamondTrap " << this->m_name << ": is created" << std::endl;
}

/* ----------operator---------- */

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap assignment operator is called" << std::endl;
	if (this != &rhs)
	{
		this->m_name = rhs.m_name;
		this->ClapTrap::m_name = rhs.ClapTrap::m_name;
		this->m_hitpoint = rhs.m_hitpoint;
		this->m_attack_damage = rhs.m_attack_damage;
		this->m_energy_point = rhs.m_energy_point;
	}
	return (*this);
}

/* ----------destructor---------- */

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->m_name << ": is destroyed" << std::endl;
}

/* -----------member functions---------- */

void    DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void    DiamondTrap::whoamI(void)
{
	std::cout << "I am DiamondTrap " << this->m_name
		<< ", and my ClapTrap name is " << this->ClapTrap::m_name
		<< std::endl;
}

/* ----------getter---------- */

std::string		DiamondTrap::getName(void)const
{
	return (this->m_name);
}

unsigned int    DiamondTrap::getEnergyPoint(void)const
{
	return (this->m_energy_point);
}

unsigned int	DiamondTrap::getHitPoint(void)const
{
	return (this->m_hitpoint);
}

unsigned int	DiamondTrap::getDamage(void)const
{
	return (this->m_attack_damage);
}