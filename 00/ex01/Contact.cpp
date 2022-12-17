/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 00:00:34 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/18 00:26:39 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "Contact.hpp"

bool	Contact::is_empty(void)
{
	return (this->first_name == "");
}

void	Contact::set_index(int i)
{
	this->index = i;
}

int	Contact::get_index(void)
{
	return (this->index);
}

void	Contact::set_first_name(void)
{
	while (utils_is_empty_line(this->first_name))
	{
		std::cout << "First name: ";
		std::getline(std::cin, this->first_name);
	}
}

std::string	Contact::get_first_name(void)
{
	return (this->first_name);
}

void	Contact::set_last_name(void)
{
	while (utils_is_empty_line(this->last_name))
	{
		std::cout << "Last name: ";
		std::getline(std::cin, this->last_name);
	}
}

std::string	Contact::get_last_name(void)
{
	return (this->last_name);
}

void	Contact::set_nickname(void)
{
	while (utils_is_empty_line(this->nickname))
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, this->nickname);
	}
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

void	Contact::set_phone_num(void)
{
	while (utils_is_empty_line(this->phone_num))
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, this->phone_num);
	}
}

std::string	Contact::get_phone_num(void)
{
	return (this->phone_num);
}

void	Contact::set_secret(void)
{
	while (utils_is_empty_line(this->dark_secret))
	{
		std::cout << "Dark secret: ";
		std::getline(std::cin, this->dark_secret);
	}
}

std::string	Contact::get_secret(void)
{
	return (this->dark_secret);
}

void	Contact::info_display_full(void)
{
	std::cout << this->get_first_name() << "\n";
	std::cout << this->get_last_name() << "\n";
	std::cout << this->get_nickname() << "\n";
	std::cout << this->get_phone_num() << "\n";
	std::cout << this->get_secret() << "\n";
	std::cout << std::endl;
}