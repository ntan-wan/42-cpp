/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:26:41 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/10 11:17:43 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class   Cat : public Animal
{
private:
	Brain	*m_brain;
public:
	//constructors
	Cat();
	Cat(const Cat &src);

	//destructor
	~Cat();

	//operator
	Cat &operator=(const Cat &rhs);
	
	//member functions
	void    makeSound(void) const;

	//getter
	Brain	*getBrain(void) const;
};
#endif