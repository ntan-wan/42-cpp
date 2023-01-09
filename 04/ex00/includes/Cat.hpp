/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:26:41 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/09 17:44:39 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class   Cat : public Animal
{
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
};
#endif