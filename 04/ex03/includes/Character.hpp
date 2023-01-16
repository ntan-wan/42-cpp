/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:47:04 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/15 22:55:23 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character : public ICharacter
{
private:
	std::string const	m_name;
	AMateria			*m_inventory[4];
public:
	//constructors
	Character(std::string name);
	Character(Character const &copy);

	//operator
	Character &operator=(Character const &ref);

	//destructor
	~Character();
	
	//member functions
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);
	
	//getter
	std::string const	&getName() const;
	AMateria			*getMateria(int idx);

};
#endif