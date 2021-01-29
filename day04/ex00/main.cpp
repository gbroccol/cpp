/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:26:15 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/29 13:07:31 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Slave.hpp"

// int main()
// {
// 	Sorcerer	robert("Robert", "the Magnificent");
// 	Victim 		jim("Jimmy");
// 	Peon 		joe("Joe");
// 	Victim 		&rv = joe;
	
// 	std::cout << std::endl;
// 	std::cout << robert << jim << joe;
// 	std::cout << std::endl;
// 	robert.polymorph(jim);
// 	jim.getPolymorphed();
// 	robert.polymorph(joe);
// 	joe.getPolymorphed();
// 	robert.polymorph(rv);
// 	std::cout << std::endl;

// 	Sorcerer	robert2(robert);
// 	Victim		jim2(jim);
// 	Peon		joe2(joe);
// 	std::cout << std::endl;
// 	return 0;
// }

// Robert, the Magnificent, is born!
// Some random victim called Jimmy just appeared!
// Some random victim called Joe just appeared!
// Zog Zog.

// I am Robert, the Magnificent, and I like ponies!
// I'm Jimmy and I like otters!
// I'm Joe and I like otters!

// Jimmy has been turned into a cute little sheep!
// Jimmy has been turned into a cute little sheep!
// Joe has been turned into a pink pony!
// Joe has been turned into a pink pony!
// Joe has been turned into a pink pony!

// Robert, the Magnificent, is born!
// Some random victim called Jimmy just appeared!
// Some random victim called Joe just appeared!
// Zog Zog.

// Bleuark ...
// Victim Joe just died for no apparent reason!
// Victim Jimmy just died for no apparent reason!
// Robert, the Magnificent, is dead. Consequences will never be the same!
// Bleuark ...
// Victim Joe just died for no apparent reason!
// Victim Jimmy just died for no apparent reason!
// Robert, the Magnificent, is dead. Consequences will never be the same!

// int main()
// {
// 	std::cout << std::endl;
// 	Sorcerer		robert("Robert", "the Magnificent");
// 	Slave			noname("NoName");
// 	std::cout << std::endl;
	
// 	std::cout << robert << noname;
// 	std::cout << std::endl;
	
// 	robert.polymorph(noname);
// 	return 0;
// }

int main()
{
	std::cout << std::endl;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << std::endl;
	
	std::cout << robert << jim << joe;
	std::cout << std::endl;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}

// Robert, the Magnificent, is born!$
// Some random victim called Jimmy just appeared!$
// Some random victim called Joe just appeared!$
// Zog zog.$

// I am Robert, the Magnificent, and I like ponies!$
// I'm Jimmy and I like otters!$
// I'm Joe and I like otters!$

// Jimmy has been turned into a cute little sheep!$
// Joe has been turned into a pink pony!$

// Bleuark...$
// Victim Joe just died for no apparent reason!$
// Victim Jimmy just died for no apparent reason!$	
// Robert, the Magnificent, is dead. Consequences will never be the same!$
