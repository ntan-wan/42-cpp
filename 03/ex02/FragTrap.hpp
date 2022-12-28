/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 00:54:05 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/29 01:15:34 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
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