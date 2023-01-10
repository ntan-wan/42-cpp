/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 08:51:05 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/10 16:57:00 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class   Brain
{
private:
    std::string m_ideas[100];
public:
    //constructors
    Brain();
    Brain(const Brain &src);

    //destructor
    ~Brain();

    //operator
    Brain   &operator=(const Brain &rhs);

    //setter
    void    addIdea(std::string idea);

    //getter
    std::string getIdea(int index) const;
};
#endif