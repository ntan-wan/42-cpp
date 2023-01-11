/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:13:21 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/11 09:58:46 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class   Dog : public Animal
{
private:
    Brain   *m_brain;
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

    //getter
    Brain   *getBrain(void) const;
};

#endif
