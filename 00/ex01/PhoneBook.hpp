#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <numeric>
# include "Contact.hpp"
# include <limits>

# define MAX_CONTACTS 8

class PhoneBook
{
private:
	Contact	contacts[8];
public:
	void	contact_add(void);
	void	contact_check(int i);
	void	contact_search(void);
	void	contacts_display(void);
	void	contacts_header_display(void);
	void	info_truncate(std::string info);
	void	info_display_partial(Contact contact);
};
#endif