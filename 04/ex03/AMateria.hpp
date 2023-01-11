/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:02:46 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/11 10:06:53 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class   AMateria
{
protected:

public:
	// constructors
	AMateria(std::string const &type);

	//member functions
	virtual AMateria	clone() const = 0;
	virtual void		use(ICharacter &target);

	//getter
	std::string const &type getType() const;
};

#endif