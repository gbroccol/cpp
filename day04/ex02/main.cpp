/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:59:05 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 22:01:32 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

// int main()
// {

	// The glory of the Emperor!

// 	ISpaceMarine* bob = new TacticalMarine;
// 	ISpaceMarine* jim = new AssaultTerminator;
// 	std::cout << std::endl;
// 	Squad* vlc = new Squad;
// 	vlc->push(bob);
// 	vlc->push(jim);
// 	std::cout << vlc->getCount() << std::endl;
// 	for (int i = 0; i < vlc->getCount(); ++i)
// 	{
// 		ISpaceMarine* cur = vlc->getUnit(i);
// 		cur->battleCry();
// 		cur->rangedAttack();
// 		cur->meleeAttack();
// 		std::cout << std::endl;
// 	}
// 	vlc->push(bob);
// 	vlc->push(jim);
// 	std::cout << vlc->getCount() << std::endl;
// 	vlc->push(nullptr);
// 	std::cout << vlc->getCount() << std::endl;
// 	for (int i = 0; i < vlc->getCount(); ++i)
// 	{
// 		ISpaceMarine* cur = vlc->getUnit(i);
// 		cur->battleCry();
// 		cur->rangedAttack();
// 		cur->meleeAttack();
// 		std::cout << std::endl;
// 	}
// 	delete vlc;
// 	return (0);
// }

int main()
{
	std::cout << "\x1b[32m_________________________TEST: Squad::Squad( Squad const & ClassToCopy )__________________________\x1b[0m" << std::endl;

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	std::cout << std::endl;

	Squad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	
	Squad	vlc_copy(*vlc);
	ISpaceMarine	*q = new TacticalMarine;
	vlc_copy.push(q);
	
	std::cout << "Units number(2) = " << vlc->getCount() << std::endl;
	std::cout << "Units number(3) = " << vlc_copy.getCount() << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < vlc_copy.getCount(); ++i)
	{
		ISpaceMarine* cur = vlc_copy.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}

	// std::cout << "\x1b[32m_________________________TEST: Squad::operator=__________________________\x1b[0m" << std::endl;
	// vlc_copy = *vlc;
	// for (int i = 0; i < vlc_copy.getCount(); ++i)
	// {
	// 	ISpaceMarine* cur = vlc_copy.getUnit(i);
	// 	cur->battleCry();
	// 	cur->rangedAttack();
	// 	cur->meleeAttack();
	// 	std::cout << std::endl;
	// }
	delete vlc;
	std::cout << std::endl;
	return (0);
}

// int main()
// {
// 	std::cout << "\x1b[32m_________________________TEST: Squad::push__________________________\x1b[0m" << std::endl;
// 	ISpaceMarine* bob = new TacticalMarine;
// 	ISpaceMarine* jim = new AssaultTerminator;
// 	AssaultTerminator *unit = NULL;
// 	ISquad* vlc = new Squad;
	
// 	vlc->push(bob);
// 	vlc->push(jim);
// 	vlc->push(jim);
// 	vlc->push(NULL);
// 	vlc->push(unit);
// 	std::cout << "Units number(2) = " << vlc->getCount() << std::endl;
	
// 	for (int i = 0; i < vlc->getCount(); ++i)
// 	{
// 		ISpaceMarine	*cur = vlc->getUnit(i);
// 		std::cout << std::endl;
// 		cur->battleCry();
// 		cur->rangedAttack();
// 		cur->meleeAttack();
// 	}
// 	std::cout << std::endl;
	
// 	delete vlc;
// 	return 0;
// }

// int main()										// main in subject
// {
// 	ISpaceMarine* bob = new TacticalMarine;
// 	ISpaceMarine* jim = new AssaultTerminator;
// 	ISquad* vlc = new Squad;
	
// 	vlc->push(bob);
// 	vlc->push(jim);
	
// 	for (int i = 0; i < vlc->getCount(); ++i)
// 	{
// 		ISpaceMarine	*cur = vlc->getUnit(i);
// 		std::cout << std::endl;
// 		cur->battleCry();
// 		cur->rangedAttack();
// 		cur->meleeAttack();
// 	}
// 	std::cout << std::endl;
	
// 	delete vlc;
// 	std::cout << "\x1b[0m" << std::endl;
// 	return 0;
// }

// Tactical Marine ready for battle!$
// * teleports from space *$

// For the holy PLOT!$
// * attacks with a bolter *$
// * attacks with a chainsword *$

// This code is unclean. PURIFY IT!$
// * does nothing *$
// * attacks with chainfists *$

// Aaargh...$
// I'll be back...$
