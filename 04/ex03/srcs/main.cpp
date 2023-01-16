/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntan-wan <ntan-wan@42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 23:35:48 by ntan-wan          #+#    #+#             */
/*   Updated: 2023/01/16 18:25:46 by ntan-wan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

static void	print_dashes(int count)
{
	std::string dashes(count, '-');
	std::cout << dashes << std::endl;
}

static void	print_title(std::string title)
{
	std::cout << "\n" << title << "\n";
	print_dashes(40);
}

static void	test_materiaSource(IMateriaSource **source)
{
	IMateriaSource	*src;
	
	print_title("TEST_MateriaSource_CONSTRUCTOR");
	src = new MateriaSource();
	
	print_title("TEST_MateriaSource_learnMateria");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	print_title("TEST_MateriaSource_learnMateria_MAX");
	AMateria	*extra_materia;

	extra_materia = new Cure();
	src->learnMateria(extra_materia);

	std::cout << "\n";
	delete extra_materia;

	print_title("TEST_MateriaSource_createMateria");
	AMateria	*ice;
	AMateria	*cure;

	ice = src->createMateria("ice");
	cure = src->createMateria("cure");

	std::cout << "\n";
	delete ice;
	delete cure;

	print_title("TEST_MateriaSource_createMateria_UNKNOWN");
	src->createMateria("42KL materia");

	*source = src;
}

static void	test_character(ICharacter **char1, IMateriaSource *src)
{
	ICharacter	*jacky;
	ICharacter	*robin;
	AMateria	*cure;
	AMateria	*ice;
	AMateria	*cure2;
	AMateria	*ice2;

	print_title("TEST_character");
	jacky = new Character("Jacky");

	print_title("TEST_character_equip");
	ice = src->createMateria("ice");
	cure = src->createMateria("cure");
	ice2 = src->createMateria("ice");
	cure2 = src->createMateria("cure");

	std::cout << "\n";
	jacky->equip(NULL);
	jacky->equip(ice);
	jacky->equip(cure);
	jacky->equip(ice2);
	jacky->equip(cure2);
	
	print_title("TEST_character_unequip");
	// jacky->unequip(0);
	// jacky->unequip(1);
	// jacky->unequip(2);
	jacky->unequip(3);
	jacky->unequip(3);
	jacky->unequip(-1);
	jacky->unequip(4);

	print_title("TEST_character_use");
	robin = new Character("robin");
	jacky->use(0, *robin);
	jacky->use(1, *robin);
	jacky->use(-1, *robin);
	jacky->use(10, *robin);
	
	std::cout << std::endl;
	delete robin;
	// delete ice;
	// delete cure;
	// delete ice2;
	delete cure2;
	*char1 = jacky;
}

void	test_deep_copy(ICharacter **jacky)
{
	
	print_title("TEST_DEEP_COPY_CHARACTER");
	Character	*jacky_copy = new Character(*(Character *)(*jacky));
	
	for (int i = 0; i < 4; i++)
	{
		if (jacky_copy->getMateria(i))
		 	std::cout << jacky_copy->getName() << " inventory at index " << i << ": " << jacky_copy->getMateria(i)->getType() << std::endl;
	}
	std::cout << "\n";
	delete jacky_copy;

	print_title("TEST_DEEP_COPY_ICE");
	Ice *ice = new Ice();
	Ice *ice2 = new Ice(*ice);
	std::cout << "Materia type: " << ice2->getType() << "\n";

	print_title("TEST_DEEP_COPY_CURE");
	Cure *cure = new Cure();
	Cure *cure2 = new Cure(*cure);
	std::cout << "Materia type: " << cure2->getType() << "\n";

	std::cout << std::endl;
	delete ice;
	delete ice2;
	delete cure;
	delete cure2;
}

void	test_assign_operator(ICharacter **jacky)
{
	print_title("TEST_ASSIGN_OPERATOR");
	Character	*jacky_wanabe = new Character("Jacky_wanabe");
	*jacky_wanabe = *(Character*)(*jacky);

	std::cout << "\n";
	delete jacky_wanabe;
}

void	test_destructor(IMateriaSource *src, ICharacter *char1)
{
	print_title("TEST_DESTRUCTOR");
	delete src;
	std::cout << "\n";
	delete char1;
}

int main(void)
{
	IMateriaSource	*src;
	ICharacter		*jacky;
	
	test_materiaSource(&src);
	test_character(&jacky, src);
	test_deep_copy(&jacky);
	test_assign_operator(&jacky);
	test_destructor(src, jacky);
	
	return (0);
}