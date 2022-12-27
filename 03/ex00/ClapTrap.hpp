/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 00:19:30 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/27 14:30:56 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

# define RED "\033[1:31m"
# define GREEN "\033[1;32m"
# define YELLOW "\033[1;33m"
# define CYAN "\033[1;36m"
# define MAGNETA "\033[95m"
# define UNDERLINE "\033[4m"
# define RESET "\033[0m"

class	ClapTrap
{
private:
	std::string	m_name;
	unsigned int	m_hitpoint;
	unsigned int	m_energy_point;
	unsigned int	m_attack_damage;
public:
	//constructor
	ClapTrap(std::string name);
	
	//destructor
	~ClapTrap();

	//member functions
	void			attack(const std::string &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	// setters
	void			setName(std::string name);
	void			setDamage(unsigned int amount);
	void			setHitPoint(unsigned int amount);
	void			setEnergyPoint(unsigned int amount);
	
	// getters
	unsigned int	getDamage(void)const;
	unsigned int	getHitPoint(void)const;
	unsigned int	getEnergyPoint(void)const;
	std::string		getName(void)const;
};

std::ostream	&operator<<(std::ostream &o, const ClapTrap &cp);
#endif