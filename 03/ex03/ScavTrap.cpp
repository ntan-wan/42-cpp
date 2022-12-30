/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 19:20:20 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/31 01:21:16 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*----------constructors----------*/

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << ": is created" << std::endl;
    this->m_name = name;
    this->m_hitpoint = 100;
    this->m_energy_point = 50;
    this->m_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap()
{
    std::cout << "ScavTrap copy constructor is called" << std::endl;
    *this = src;
}

/*----------destructor----------*/

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->m_name << ": is destroyed" << std::endl;
}

/* ----------member functions---------- */

void    ScavTrap::attack(std::string const &target)
{
    if (this->m_energy_point && this->m_hitpoint)
	{
		this->m_energy_point--;
		std::cout << "ScavTrap " << this->m_name
			<< ": attacks " << target
			<< ", damage " << this->m_attack_damage
			<< " points" << std::endl;
	}
	else if (!this->m_energy_point)
		std::cout << "ScavTrap " << this->m_name << ": no energy to attack" << std::endl;
	else if (!this->m_hitpoint)
		std::cout << "ScavTrap " << this->m_name << ": is dead, can't attack" << std::endl;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "Scavtrap " << this->m_name << ": is in Gate Keeper mode" << std::endl;
}

/* ----------operator overload---------- */

ScavTrap    &ScavTrap::operator=(const ScavTrap &rhs)
{
   std::cout << "ScavTrap assignment operator called"  << std::endl;
   if (this != &rhs)
   {
        this->m_name = rhs.m_name;
        this->m_hitpoint = rhs.m_hitpoint;
        this->m_energy_point = rhs.m_energy_point;
        this->m_attack_damage = rhs.m_attack_damage;
   }
    return (*this);
}
