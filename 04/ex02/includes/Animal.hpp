/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:43:34 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/11 09:59:57 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
protected:
	std::string	m_type;
public:
	//constructors
	Animal();
	Animal(std::string type);
	Animal(const Animal &src);

	//destructor
	virtual ~Animal();
	
	//operators
	Animal	&operator=(const Animal &rhs);
	
	//member functions
	virtual void	makeSound(void) const = 0;

	//setter
	void	setType(std::string type);

	//getter
	std::string	getType(void) const;
};
#endif