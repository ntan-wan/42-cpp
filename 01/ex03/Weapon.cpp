/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:20:19 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 13:36:32 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type_(type)
{
}

Weapon::~Weapon()
{
}

void    Weapon::setType(std::string type)
{
    this->type_ = type;
}

const std::string&  Weapon::getType(void)
{
    return (this->type_);
}