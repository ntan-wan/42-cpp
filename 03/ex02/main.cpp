/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 08:59:33 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/29 01:22:59 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

void	test_attack(FragTrap *sp1, FragTrap *sp2)
{
	print_title("TEST_ATTACK");
	ClapTrap	*scavtrap = sp1;
	scavtrap->attack(sp2->getName());
}

void	test_high_five(FragTrap *fp1)
{
	print_title("TEST_HIGH_FIVE");
	fp1->highFivesGuys();

}
int main(void)
{
	FragTrap	*fp1 = new FragTrap("James");
	FragTrap	*fp2 = new FragTrap("Jacky");
	
	test_attack(fp1, fp2);
	test_high_five(fp1);
	delete fp1;
	delete fp2;
	return (0);
}