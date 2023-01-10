/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:53:39 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/10 17:00:56 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define MAX 10

void	print_dashes(int count)
{
	std::string	dashes(count, '-');
	std::cout << dashes << std::endl;
}

void	print_title(std::string title)
{
	std::cout << "\n" << title << "\n";
	print_dashes(20);
}

void	fill_up_animals(Animal *(&animals)[MAX])
{
	print_title("ANIMALS CREATE");
	for (int i = 0; i < MAX; i++)
	{
		if (i < (MAX / 2))
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
}

void	test_brain(Animal *(&animals)[MAX])
{
	print_title("TEST_BRAIN");

	Dog	*dog = (Dog *)(animals[0]);
	
	for (int i = 0; !dog->getBrain()->getIdea(i).empty(); i++)
		std::cout << "Dog's idea index " << i <<  ":" << dog->getBrain()->getIdea(i) << std::endl;

	dog->getBrain()->addIdea("I will bark everytime I see the mailman");
	std::cout << "Dog's new idea index 3: " << dog->getBrain()->getIdea(3) << std::endl;
}

void	test_deep_copy(Animal *(&animals)[MAX])
{
	print_title("TEST_DEEP_COPY");
	
	Dog copiedDog(*(Dog *)animals[0]);
	
	std::cout << "\n" << "Orginal -> " << animals[0]->getType() << "\n";
	std::cout << "CopiedDog -> " << copiedDog.getType() << "\n" << std::endl;

	copiedDog.setType("Another Dog");
	std::cout << "CopiedDog set type to \"Another Dog\"" << std::endl;
	
	std::cout << "\n" << "Orginal -> " << animals[0]->getType() << "\n";
	std::cout << "CopiedDog -> " << copiedDog.getType() << "\n" << std::endl;

	copiedDog.getBrain()->addIdea("me want food!");
	std::cout << "CopiedDog set idea to \"me want food!\"" << std::endl;
	
	std::cout << "\n" << "Orginal -> " << ((Dog *)animals[0])->getBrain()->getIdea(4) << "\n";
	std::cout << "CopiedDog -> " << copiedDog.getBrain()->getIdea(4) << "\n" << std::endl;
}

void	remove_all_animals(Animal *(&animals)[MAX])
{
	print_title("ANIMAL REMOVE");
	for (int i = 0; i < MAX; i++)
		delete animals[i];
}

int main()
{
	Animal	*animals[MAX];

	fill_up_animals(animals);
	test_brain(animals);
	test_deep_copy(animals);
	remove_all_animals(animals);

	return (0);
}