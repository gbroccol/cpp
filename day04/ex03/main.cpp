/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:57 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/28 18:31:44 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

#include "ICharacter.hpp"
#include "Character.hpp"

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}

// int main()
// {
// 	std::cout << "\x1b[33;1m_________________________Test 1__________________________\x1b[0m" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	Ice* IceTest = new Ice;
// 	Cure* CureTest = new Cure;
	
// 	src->learnMateria(IceTest);
// 	src->learnMateria(new Cure);
// 	src->learnMateria(new Ice);
// 	src->learnMateria(CureTest);
// 	src->learnMateria(NULL);
// 	src->learnMateria(CureTest);
// 	getchar();
	
// 	std::cout << "\x1b[33;1m_________________________Test 2__________________________\x1b[0m" << std::endl;
// 	Character* me = new Character("Nastya");

// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
	
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	tmp = src->createMateria("notexist");
// 	me->equip(tmp);
// 	getchar();

// 	std::cout << "\x1b[33;1m_________________________Test 3__________________________\x1b[0m" << std::endl;
// 	Character* bob = new Character("Bob");
// 	me->use(-1, *bob);
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	me->use(2, *bob);
// 	me->use(3, *bob);
// 	me->use(4, *bob);
// 	getchar();

// 	std::cout << "\x1b[33;1m_________________________Test 4__________________________\x1b[0m" << std::endl;
// 	Character copyBob(*bob);
// 	std::cout << "Bob's name is " << copyBob.getName() << std::endl;
// 	std::cout << "Bob has " << copyBob.getMaterAmount() << " materia(s)" << std::endl;
// 	Character copyMe(*me);
// 	std::cout << "My name is " << copyMe.getName() << std::endl;
// 	std::cout << "I have " << copyMe.getMaterAmount() << " materia(s)" << std::endl;
		
// 	delete bob;
// 	delete me;
// 	delete src;
// 	getchar();

// 	std::cout << "\x1b[33;1m_________________________Test 5__________________________\x1b[0m" << std::endl;
	
// 	copyBob = copyMe;

// 	std::cout << "Bob's name is " << copyBob.getName() << std::endl;
// 	std::cout << "Bob has " << copyBob.getMaterAmount() << " materia(s)" << std::endl;
// 	getchar();
	
// 	copyMe.unequip(-1);
// 	copyMe.unequip(0);
// 	copyMe.unequip(1);
// 	copyMe.unequip(2);
// 	copyMe.unequip(100);
// 	copyMe.unequip(0);
// 	getchar();
	
// 	copyMe.use(0, copyBob);
// 	copyMe.use(1, copyBob);
// 	getchar();
	
// 	copyBob.use(0, copyMe);
// 	copyBob.use(1, copyMe);
// 	getchar();
	
// 	copyBob.unequip(1);
// 	copyBob.unequip(0);
// 	getchar();
	
// 	copyBob.use(0, copyMe);
// 	copyBob.use(1, copyMe);
	
// 	return 0;
// }

// * shoots an ice bolt at bob *$
// * heals bob's wounds *$