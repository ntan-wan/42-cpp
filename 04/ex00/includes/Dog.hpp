/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:13:21 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/09 17:36:06 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class   Dog : public Animal
{
public:
    //constructors
    Dog();
    Dog(const Dog &src);

    //Destructor
    ~Dog();

    //operator
    Dog &operator=(const Dog &rhs);

    //member functions
    void    makeSound(void) const;
};

#endif
