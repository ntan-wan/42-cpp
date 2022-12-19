/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:38:29 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/19 14:27:04 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CPP
# define HUMAN_A_CPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name_;
    Weapon      &weapon_;
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack(void);
};
#endif