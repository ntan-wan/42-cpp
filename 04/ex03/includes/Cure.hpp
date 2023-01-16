/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:15:39 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 17:05:08 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class   Cure : public AMateria
{
private:
    // std::string m_type;
public:
    //constructors
    Cure();
    Cure(Cure const &copy);

    //destructor
    ~Cure();

    //operator
    Cure &operator=(Cure const &ref);

    //member functions
    Cure    *clone() const;
    void    use(ICharacter &target);

    //getter
    std::string const &getType() const;
};

#endif