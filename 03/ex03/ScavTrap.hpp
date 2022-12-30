/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:20:25 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/31 01:12:27 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap
{
protected: 
    unsigned int m_energy_point;
    
public:
    //constructors
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &src);

    //destructor
    ~ScavTrap();

    //member functions
    void    attack(const std::string &target);
    void    guardGate();

    //operator overload
    ScavTrap    &operator=(const ScavTrap &rhs);
    
};
#endif