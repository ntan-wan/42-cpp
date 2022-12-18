/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:10:54 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/18 13:24:48 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Utils.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

static void	display_prompt(void)
{
	std::cout << "Enter one of following:" << "\n";
	std::cout << "1.ADD" << "\n";
	std::cout << "2.SEARCH" << "\n";
	std::cout << "3.EXIT" << "\n";
	std::cout << std::endl;
}

static void	get_command(std::string &command)
{
	std::getline(std::cin, command);
}

static void	execute_command(std::string command, PhoneBook &phonebook)
{
	if (command == "ADD")
		phonebook.contact_add();
	else if (command == "SEARCH")
		phonebook.contact_search();
}

int main(void)
{
	std::string command;
	PhoneBook phonebook;
	
	while (command != "EXIT")
	{
		Utils::clear_screen();
		display_prompt();
		get_command(command);
		execute_command(command, phonebook);
	}
	return (0);
}