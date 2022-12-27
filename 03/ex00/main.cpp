/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 08:59:33 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/27 15:24:31 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	print_both_status(ClapTrap &cp1, ClapTrap &cp2)
{
	std::cout << "\n";
	std::cout << cp1;
	std::cout << cp2;
	std::cout << "\n";
}

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

void	test_getter_setter(ClapTrap &cp1, ClapTrap &cp2)
{
	print_title("TEST_GETTER_SETTER");
	print_both_status(cp1, cp2);
	cp1.setName("Zac");
	cp1.setHitPoint(30);
	cp1.setEnergyPoint(20);
	cp1.setDamage(30);

	std::cout << "\n";
	
	cp2.setName("Zoe");
	cp2.setHitPoint(30);
	cp2.setEnergyPoint(20);
	cp2.setDamage(30);
	print_both_status(cp1, cp2);
}

void	test_attack(ClapTrap &cp1, ClapTrap &cp2)
{
	print_title("TEST_ATTACK");
	print_both_status(cp1, cp2);
	cp1.setDamage(5);
	cp1.attack(cp2.getName());
	cp2.takeDamage(cp1.getDamage());
	print_both_status(cp1, cp2);

	print_title("TEST_ATTACK_OVERKILL");
	print_both_status(cp1, cp2);
	cp1.setDamage(cp2.getHitPoint() + 10);
	cp1.attack(cp2.getName());
	cp2.takeDamage(cp1.getDamage());
	print_both_status(cp1, cp2);
}

void	test_repair(ClapTrap &cp1, ClapTrap &cp2)
{
	print_title("TEST_REPAIR");
	print_both_status(cp1, cp2);
	cp1.setDamage(5);
	cp2.setHitPoint(10);
	cp2.takeDamage(cp1.getDamage());
	cp2.beRepaired(3);
	print_both_status(cp1, cp2);

	print_title("TEST_REPAIR_DEAD");
	print_both_status(cp1, cp2);
	cp1.setDamage(cp2.getHitPoint());
	cp2.takeDamage(cp1.getDamage());
	cp2.beRepaired(5);
	print_both_status(cp1, cp2);
}

void	test_no_energy(ClapTrap &cp1, ClapTrap &cp2)
{
	print_title("TEST_NO_ENERGY");
	print_both_status(cp1, cp2);
	cp1.setEnergyPoint(0);
	cp1.attack(cp2.getName());
	cp1.beRepaired(10);
	print_both_status(cp1, cp2);
}

void	test_death(ClapTrap &cp1, ClapTrap &cp2)
{
	print_title("TEST_DEATH");
	print_both_status(cp1, cp2);
	cp1.setDamage(cp2.getHitPoint());
	cp1.attack(cp2.getName());
	cp2.takeDamage(cp1.getDamage());
	print_both_status(cp1, cp2);

	print_title("TEST_DEATH_ZOMBIE");
	print_both_status(cp1, cp2);
	cp2.attack(cp1.getName());
	print_both_status(cp1, cp2);
}

int main(void)
{
	ClapTrap    cp1("Jason");
	ClapTrap    cp2("Nigel");

	test_getter_setter(cp1, cp2);
	test_attack(cp1, cp2);
	test_repair(cp1, cp2);
	test_death(cp1, cp2);
	test_no_energy(cp1, cp2);
	return (0);
}