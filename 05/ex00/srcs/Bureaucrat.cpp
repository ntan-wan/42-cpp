/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:40:45 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/02/01 15:36:02 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//constructors

Bureaucrat::Bureaucrat() : m_name("Default")
{
	this->m_grade = 150;
	std::cout << this->getName() << ", with Bureaucrat grade " << this->getGrade() << " is constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : m_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->m_grade = grade;
	std::cout << this->getName() << ", with Bureaucrat grade " << this->getGrade() << " is constructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : m_name(copy.getName() + "_copy")
{
	*this = copy;
	std::cout << this->getName() << ", with Bureaucrat grade " << this->getGrade() << " copied value from " << copy.getName() << std::endl;
}

//destructor

Bureaucrat::~Bureaucrat()
{
	std::cout << this->getName() << ", with Bureaucrat grade " << this->getGrade() << " is destroyed" << std::endl;
}

//operator

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
		this->m_grade = src.getGrade();
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat &b)
{
	o << b.getName() << ", " << "bureaucrat grade " << b.getGrade() << std::endl;
	return (o);
}

//member functions

void    Bureaucrat::incrementGrade(int increment)
{
	if ((int)this->m_grade - increment < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->m_grade -= increment;
		std::cout << this->getName() << ", incremented Bureaucrat grade by " << increment << std::endl;
	}
}

void    Bureaucrat::decrementGrade(int decrement)
{
	if ((int)this->m_grade + decrement > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->m_grade += decrement;
		std::cout << this->getName() << ", decremented Bureaucrat grade by " << decrement << std::endl;
	}
}

//getter

std::string    Bureaucrat::getName(void) const
{
	return (this->m_name);
}

size_t  Bureaucrat::getGrade(void) const
{
	return (this->m_grade);
}

//execptions

const char  *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low!");
}

const char  *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high!");
}
