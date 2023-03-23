/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:31:28 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/03/23 22:49:39 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"
#include "PhoneBook.hpp"

void	PhoneBook::info_truncate(std::string info)
{
	if (info.length() > 10)
		std::cout << "|" << info.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << info;
}

void	PhoneBook::info_display_partial(Contact contact)
{
	std::cout << "|";
	std::cout << std::setw(10) << contact.get_index();
	this->info_truncate(contact.get_first_name());
	this->info_truncate(contact.get_last_name());
	this->info_truncate(contact.get_nickname());
	std::cout << "|" << std::endl;
}

void	PhoneBook::contacts_header_display(void)
{
	Utils::put_dashes(45);
	std::cout << "|";
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|";
	std::cout << "\n";
	Utils::put_dashes(45);
}

void	PhoneBook::contacts_display(void)
{
	this->contacts_header_display();
	for (int i = -1; ++i < MAX_CONTACTS;)
	{
		if (this->contacts[0].is_empty())
		{
			Utils::put_colored_text(RED, "Contact list is empty!");
			break ;
		}
		else if (!this->contacts[i].is_empty())
		{
			this->info_display_partial(this->contacts[i]);
			Utils::put_dashes(45);
		}
	}
}

void	PhoneBook::contact_add(void)
{
	static int	i;
	Contact		new_contact;
	
	if (i == MAX_CONTACTS - 1)
		Utils::put_colored_text(RED, "LAST SLOT");
	else if (i >= MAX_CONTACTS)
		Utils::put_colored_text(RED, "OVERRIDING EXISTING DATA");
	new_contact.set_first_name();
	new_contact.set_last_name();
	new_contact.set_nickname();
	new_contact.set_phone_num();
	new_contact.set_secret();
	new_contact.set_index(i % MAX_CONTACTS);
	this->contacts[i++ % MAX_CONTACTS] = new_contact;
}

void PhoneBook::contact_check(int index)
{
	if ( index < 0 || index > MAX_CONTACTS - 1)
	{
		Utils::clear_input_stream();
		Utils::put_colored_text(RED, "0 - 7th index only!");
	}
	else if (this->contacts[index].is_empty())
	{
		Utils::clear_input_stream();
		Utils::put_colored_text(RED, "No entry found!");
	}
	else
		this->contacts[index].info_display_full();
}

/* 
	@brief Check whether the contacts is empty.
	@note Get index input from user.
 */
void	PhoneBook::contact_search(void)
{
	this->contacts_display();
	Utils::put_colored_text(BLUE, "Input non-numeric keys to exit.");
	for (int index = 0; std::cout << "Index: " && std::cin >> index;)
		this->contact_check(index);
	Utils::clear_input_stream();
}