/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:08:40 by ntan-wan          #+#    #+#             */
/*   Updated: 2022/12/17 13:23:06 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
private:
	int			index;
	std::string	nickname;
	std::string	first_name;
	std::string	last_name;
	std::string	phone_num;
	std::string	dark_secret;
public:
	bool		is_empty(void);
	void		set_secret(void);
	void		set_index(int i);
	void		set_nickname(void);
	void		set_last_name(void);
	void		set_phone_num(void);
	void		set_first_name(void);
	int			get_index(void);
	std::string	get_secret(void);
	std::string	get_nickname(void);
	std::string	get_phone_num(void);
	std::string	get_last_name(void);
	std::string	get_first_name(void);
	void		info_display_full(void);
};
#endif