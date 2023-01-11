/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 08:55:13 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/10 16:57:00 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//constructors

Brain::Brain()
{
	this->m_ideas[0] = "🥱";
	this->m_ideas[1] = "🥵";
	this->m_ideas[2] = "😢";
	std::cout << "Brain is created" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain is copied" << std::endl;
}

//destructor

Brain::~Brain()
{
	std::cout << "Brain is destroyed" << std::endl;
}

//operator

Brain   &Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
		this->m_ideas[i] = rhs.m_ideas[i];
	return (*this);
}

//setter

void	Brain::addIdea(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->m_ideas[i].empty())	
		{
			this->m_ideas[i] = idea;
			break ;
		}
	}
}

//getter

std::string Brain::getIdea(int index) const
{
	return (this->m_ideas[index]);
}
