/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 14:05:25 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 14:16:54 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name_(name)
{
    std::cout << "HumanB " << this->name_ << " is created" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this->name_ << " is destroyed" << std::endl;
}

void    HumanB::attack(void)
{
    std::cout << this->name_ << "attacks with their " << this->weapon_->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon_ = &weapon;
}