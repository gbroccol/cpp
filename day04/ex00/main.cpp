/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 12:26:15 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 13:58:51 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

// int main()
// {
// 	// extra test
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
