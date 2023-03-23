/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:15:33 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/02/01 15:01:12 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	print_dashes(int count)
{
	std::string dashes(count, '-');
	
	std::cout << dashes << std::endl;
}

void	print_title(std::string title)
{
	std::cout << "\n" << title << "\n";
	print_dashes(50);
}

void	test_constructor(void)
{
	print_title("TEST_CONSTRUCTOR");
	Bureaucrat	*nameless = new Bureaucrat();
	Bureaucrat	*john = new Bureaucrat("John", 100);
	Bureaucrat	john_copy(*john);

	std::cout << "\n";
	
	delete nameless;
	delete john;
}

void	test_operator(void)
{
	print_title("TEST_ASSIGN_OPERATOR");
	Bureaucrat	*nameless = new Bureaucrat();
	Bureaucrat	*john = new Bureaucrat("John", 100);

	std::cout << "\nBefore:\n";
	std::cout << *nameless;
	*nameless = *john;
	std::cout << "\nAfter:\n";
	std::cout << *nameless;

	print_title("TEST_stream_OPERATOR");
	std::cout << *nameless;
	std::cout << *john;
	
	std::cout << "\n";
	
	delete nameless;
	delete john;
}

void	test_increment_decrement(std::string test_option)
{
	Bureaucrat	*john;
	int			grades[] = {10, 3, 300};
	
	if (test_option != "increment" && test_option != "decrement")
		return ;
	print_title("TEST_" + test_option);
	john = new Bureaucrat("John", 75);
	std::cout << "\n";
	for (int i = 0; i < (sizeof(grades) / sizeof(grades[0])); i++)
	{
		try
		{
			std::cout << "grade: " << grades[i] << "\n";
			if (test_option ==  "increment")
				john->incrementGrade(grades[i]);
			else if (test_option == "decrement")
				john->decrementGrade(grades[i]);
			std::cout << *john << "\n";
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << "Result: " << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << "Result: " << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	delete john;
}

void	test_exception(void)
{
	Bureaucrat	*john;
	int			grades[] = {-1, -2, 4, 5, 300};
	
	print_title("TEST_EXCEPTION");
	for (int i = 0; i < (sizeof(grades) / sizeof(grades[0])); i++)
	{
		try
		{
			std::cout << "Init grade with: " << grades[i] << "\n";
			john = new Bureaucrat("John", grades[i]);
			if (john)
				delete john;
			std::cout << "\n";
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << "Result: " << e.what() << "\n" << std::endl;
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << "Result: " << e.what() << "\n" << std::endl;
		}
	}
}

int	main(void)
{
	test_constructor();
	test_operator();
	test_increment_decrement("increment");
	test_increment_decrement("decrement");
	test_exception();
	return (0);
}