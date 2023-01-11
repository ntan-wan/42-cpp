/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:20:23 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/09 19:05:11 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class   WrongAnimal
{
protected:
    std::string m_type;
public:
    //constructors
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);

    //destructor
    virtual ~WrongAnimal();

    //operator
    WrongAnimal &operator=(const WrongAnimal &rhs);
    
    //getter
    std::string getType(void) const;

    //member functions
    virtual void makeSound(void) const;
};
#endif