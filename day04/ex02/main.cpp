/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:59:05 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/25 21:01:01 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

// int main()
// {
	
// }

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	
	delete vlc;
	return 0;
}

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