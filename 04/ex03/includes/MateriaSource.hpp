/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:27:00 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 11:42:15 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*m_inventory[4];
public:
	//constructors
	MateriaSource();
	MateriaSource(const MateriaSource &copy);

	//destructor
	~MateriaSource();

	//operator
	MateriaSource &operator=(const MateriaSource &ref);

	//member functions
	void		learnMateria(AMateria *m);
	AMateria	*createMateria(std::string const &type);
};
#endif