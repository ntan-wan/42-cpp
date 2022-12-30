/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 00:54:05 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/31 01:02:26 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap
{
protected:
	unsigned int	m_hitpoint;
	unsigned int	m_attack_damage;

public: 
	//constructors
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);

	//destructor
	~FragTrap();

	//member functions
	void    highFivesGuys(void);
	void    attack(std::string const &target);

	//operator
	FragTrap    &operator=(const FragTrap &rhs);
};
#endif