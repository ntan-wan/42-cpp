/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 08:59:33 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/31 02:36:45 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

void	print_status(DiamondTrap &dp1)
{
	std::cout << CYAN << dp1.DiamondTrap::getName() << RESET
		<< ", ClapTrap name: " << dp1.ClapTrap::getName()
		<< ", HP: " << dp1.DiamondTrap::getHitPoint()
		<< ", EP: " << dp1.DiamondTrap::getEnergyPoint()
		<< ", AD: " << dp1.DiamondTrap::getDamage() << "\n" << std::endl;
}

void	test_status(DiamondTrap &dp1)
{
	print_title("TEST_STATUS");
	print_status(dp1);
}

void	test_copy(DiamondTrap &dp1)
{
	print_title("TEST_COPY");
	DiamondTrap	dp2 (dp1);
	
	print_status(dp2);
}

void	test_high_five(DiamondTrap &dp1)
{
	print_title("TEST_HIGH_FIVE");
	dp1.highFivesGuys();
	std::cout << "\n" << std::endl;
}

void	test_attack(DiamondTrap &dp1)
{
	print_title("TEST_ATTACK");
	dp1.attack("Simon");
	std::cout <<"\n" << std::endl;
}

void	test_whoamI(DiamondTrap &dp1)
{
	print_title("TEST_WHOAMI");
	dp1.whoamI();
	std::cout << "\n" << std::endl;
}

int main(void)
{
	DiamondTrap	dp1("Jacky");

	test_status(dp1);
	test_copy(dp1);
	test_high_five(dp1);
	test_attack(dp1);
	test_whoamI(dp1);
	return (0);
}