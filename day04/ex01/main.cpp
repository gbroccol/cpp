/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:40:55 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/29 14:46:12 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	return 0;
}

// int main()
// {
// 	Character* me = new Character("me");
// 	std::cout << *me << std::endl;								// me has 40 AP and is unarmed

// 	Enemy* b = new RadScorpion();								// * click click click *				
// 	Enemy*	c = new SuperMutant();								// Gaaah. Me want smash heads!
// 	std::cout << std::endl;

// 	AWeapon* pr = new PlasmaRifle();
// 	AWeapon* pf = new PowerFist();
// 	me->equip(pr);
// 	std::cout << *me;
// 	std::cout << std::endl;										// me has 40 AP and wields a Plasma Rifle

// 	me->equip(pf);
// 	me->attack(b);												// me attacks RadScorpion with a Power Fist
// 																// * pschhh... SBAM! *
// 	std::cout << *me << std::endl;								// me has 32 AP and wields a Power Fist

// 	me->equip(pr);
// 	std::cout << *me << std::endl;								// me has 32 AP and wields a Plasma Rifle

// 	me->attack(b);												// me attacks RadScorpion with a Plasma Rifle
// 																// * piouuu piouuu piouuu *
// 	std::cout << *me << std::endl;								// me has 27 AP and wields a Plasma Rifle

// 	me->attack(b);												// me attacks RadScorpion with a Plasma Rifle
// 																// * piouuu piouuu piouuu *
// 																// * SPROTCH *
// 	std::cout << *me << std::endl;								// me has 22 AP and wields a Plasma Rifle

// 	me->attack(c);												// me attacks Super Mutant with a Plasma Rifle
// 																// * piouuu piouuu piouuu *
// 	me->attack(c);												// me attacks Super Mutant with a Plasma Rifle
// 																// * piouuu piouuu piouuu *
// 	me->attack(c);												// me attacks Super Mutant with a Plasma Rifle
// 																// * piouuu piouuu piouuu *
// 	me->attack(c);												// me attacks Super Mutant with a Plasma Rifle
// 																// * piouuu piouuu piouuu *
// 	me->attack(c);

// 	me->attack(NULL);
// 	me->attack(b);

// 	std::cout << std::endl;
// 	std::cout << *me << std::endl;								// me has 2 AP and wields a Plasma Rifle

// 	me->recoverAP();
// 	std::cout << *me << std::endl;								// me has 12 AP and wields a Plasma Rifle

// 	me->attack(c);												// me attacks Super Mutant with a Plasma Rifle
// 																// * piouuu piouuu piouuu *
// 	std::cout << *me << std::endl;											// me has 7 AP and wields a Plasma Rifle
	
// 	delete me;
// 	delete c;
// 	delete pr;
// 	delete pf;

// 	return 0;
// }
