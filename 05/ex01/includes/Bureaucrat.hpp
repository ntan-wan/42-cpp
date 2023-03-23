/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:14:13 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/02/02 15:41:36 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class   Bureaucrat
{
private:
	const std::string	m_name;
	size_t				m_grade;
	
public:

	//constructor
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);

	//destructor
	~Bureaucrat();
	
	//operator
	Bureaucrat	&operator=(const Bureaucrat &src);

	//member functions
	void	incrementGrade(int increment);
	void	decrementGrade(int decrement);
	void	signForm(Form &form) const;

	//getter
	std::string	getName(void) const;
	size_t		getGrade(void) const;

	//exceptions

	class   GradeTooLowException : public std::exception
	{
	public:
		virtual const char  *what() const throw();
	};

	class   GradeTooHighException : public std::exception
	{
	public:
		virtual const char  *what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat &b);
#endif