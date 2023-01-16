/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:02:46 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 10:09:47 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class	ICharacter;

class   AMateria
{
protected:
	std::string		m_type;
public:
	// constructors
	AMateria();
	AMateria(std::string const &type);
	AMateria(AMateria const &copy);

	//destructor
	virtual	~AMateria();

	//member functions
	virtual AMateria	*clone() const = 0;
	virtual void		use(ICharacter &target);

	//getter
	std::string const &getType() const;
};

#endif