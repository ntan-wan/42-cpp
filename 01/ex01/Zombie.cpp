/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:13:15 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 11:38:35 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name_ = "";
    std::cout << "Zombie is created" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name_ = name;
    std::cout << "Zombie " << this->name_ << " is created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name_ << " is destroyed" <<std::endl;
}

void    Zombie::announce(void)
{
    std::cout << this->name_ << ": " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
   this->name_ = name; 
}