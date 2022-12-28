/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 01:00:16 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/29 01:17:40 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ----------constructors---------- */

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << ": is created" << std::endl;
    this->m_name = name;
    this->m_hitpoint = 100;
    this->m_energy_point = 100;
    this->m_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

/* ----------destructor---------- */

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->m_name << ": is destroyed" << std::endl;
}

/* ----------operator---------- */

FragTrap    &FragTrap::operator=(const FragTrap &rhs)
{
    if (this != &rhs)
    {
        this->m_name = rhs.getName();
        this->m_hitpoint = rhs.getHitPoint();
        this->m_attack_damage = rhs.getDamage();
        this->m_energy_point = rhs.getEnergyPoint();
    }
    return (*this);
}

/* ----------member functions---------- */

void    FragTrap::highFivesGuys(void)
{
    std::cout << "HIGH FIVES GUYS !" << std::endl;
}

void    FragTrap::attack(std::string const &target)
{
    if (this->m_energy_point && this->m_hitpoint)
	{
		this->m_energy_point--;
		std::cout << "FragTrap " << this->m_name
			<< ": attacks " << target
			<< ", damage " << this->m_attack_damage
			<< " points" << std::endl;
	}
	else if (!this->m_energy_point)
		std::cout << "FragTrap " << this->m_name << ": no energy to attack" << std::endl;
	else if (!this->m_hitpoint)
		std::cout << "FragTrap " << this->m_name << ": is dead, can't attack" << std::endl;
}