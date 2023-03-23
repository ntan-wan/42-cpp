/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:43:34 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/03/23 16:45:25 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//constructors

Form::Form() : m_name("Default"), m_grade_sign(150), m_grade_execute(150), m_is_signed(false)
{
    std::cout << "Form "
        << this->getName()
        << ", grade sign " << this->getGradeSign()
        << ", grade execute " << this->getGradeExecute()
        << " is constructed" << std::endl;
}

Form::Form(const std::string name, int grade_sign, int grade_execute) : m_name(name), m_grade_sign(grade_sign), m_grade_execute(grade_execute), m_is_signed(false)
{
    std::cout << "Form "
        << this->getName();
        << ", grade sign " << this->getGradeSign()
        << ", grade execute " << this->getGradeExecute()
        << " is constructed" << std::endl;
}

Form::Form(const Form &src)
{
    *this = src;
}

std::ostream    &operator<<(std::ostream &o, const Form &form)
{
    return (o);
}