/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 09:08:14 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/31 02:37:20 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDtrap_hppJ

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class   DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string m_name;
public:
	//constructors
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &src);

	//destructor
	~DiamondTrap();

	//member functions
	void	attack(const std::string &target);
	void	whoamI(void);

	//operator
	DiamondTrap &operator=(const DiamondTrap &rhs);
	
	//getter
	std::string		getName(void)const;
	unsigned int	getEnergyPoint(void)const;
	unsigned int	getHitPoint(void)const;
	unsigned int	getDamage(void)const;
};
#endif