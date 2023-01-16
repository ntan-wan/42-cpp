/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:30:59 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/15 11:46:34 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class   IMateriaSource
{
public:
	//destructor
	virtual			~IMateriaSource() {}

	//member functions
	virtual void	learnMateria(AMateria *) = 0;
	virtual 		AMateria *createMateria(std::string const &type) = 0;
};

#endif