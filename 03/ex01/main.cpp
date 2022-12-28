/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 08:59:33 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/28 23:10:02 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void	print_dashes(int count)
{
	std::string	dashes(count, '-');
	std::cout << dashes << std::endl;
}

void	print_title(std::string title)
{
	std::cout << MAGNETA << title << RESET << std::endl;
	print_dashes(40);
}

void	test_attack(ScavTrap *sp1, ScavTrap *sp2)
{
	print_title("TEST_ATTACK");
	ClapTrap	*scavtrap = sp1;
	scavtrap->attack(sp2->getName());
}

void	test_guard_gate(ScavTrap *sp1)
{
	print_title("TEST_GUARD_GATE");
	sp1->guardGate();
}

int main(void)
{
	ScavTrap	*sp1 = new ScavTrap("James");
	ScavTrap	*sp2 = new ScavTrap("Jacky");
	
	test_attack(sp1, sp2);
	test_guard_gate(sp1);
	delete sp1;
	delete sp2;
	return (0);
}