/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 00:20:25 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/28 21:30:40 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap
{
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