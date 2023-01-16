/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 11:16:16 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 17:03:03 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include "IMateriaSource.hpp"

class   Ice : public AMateria
{
private:
        // std::string m_type;
public:
    //constructors
    Ice();
    Ice(Ice const &copy);
    
    //operator
    Ice &operator=(Ice const &ref);

    //destructor
    ~Ice();

    //member functions
    Ice     *clone(void) const;
    void    use(ICharacter& target);

    //getter
    std::string const &getType() const;
};
#endif