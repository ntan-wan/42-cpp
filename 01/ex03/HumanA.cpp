/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:38:09 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 14:26:52 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name_(name), weapon_(weapon)
{
    std::cout << "HumanA " << this->name_ << " is created" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA " << this->name_ <<  " is destroyed" << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << this->name_ << " attacks with their " << this->weapon_.getType() << std::endl;
}
