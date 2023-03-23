/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:12:14 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/02/03 11:40:25 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class   Form
{
private:
	const std::string	m_name;
	const int			m_grade_sign;
	const int			m_grade_execute;
	bool				m_is_signed;
public:
	//constructors
	Form();
	Form(const std::string name, int grade_sign, int grade_execute);;
	Form(const Form &src);

	//operator
	Form	&operator=(const Form &rhs);

	//destructor
	~Form();

	//getter
	std::string	getName(void) const;
	int			getGradeSign(void) const;
	int			getGradeExecute(void) const;
	bool		getIsSigned(void) const;

	//member functions
	void	beSigned(const Bureaucrat &bureaucrat);

	//Exceptions
	class	GradeTooHighException : public std::exception
	{
		virtual const char	*what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &o, const Form &form);
#endif
