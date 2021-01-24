/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:19:17 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 20:58:36 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	std::cout << std::endl << "\x1b[1;33mWelcome to Borderlands!\x1b[0m" << std::endl;
	getchar();

	std::cout << "\x1b[1;33m__________________________________________________________CREATE ENNEMIS__________________________________________________________\x1b[0m" << std::endl;
	std::cout << "\x1b[35;1m";
	NinjaTrap 		DanNinja("Dandelion");
	DanNinja.setNameColor("\x1b[35;1m");
	
	std::cout << "\x1b[36;1m";
	ScavTrap 		BarScav("Barbarella");
	BarScav.setNameColor("\x1b[36;1m");

	std::cout << "\x1b[33;1m";
	FragTrap 		BombFrag("Bomb");
	BombFrag.setNameColor("\x1b[33;1m");
	
	std::cout << std::endl;
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________RANGED ATTACK__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.rangedAttack("Ennemy");
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________MELEE ATTACK__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.meleeAttack("Ennemy");
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________CHALLENGE__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.ninjaShoebox(BombFrag);
	DanNinja.ninjaShoebox(DanNinja);
	DanNinja.ninjaShoebox(BarScav);
	DanNinja.ninjaShoebox(DanNinja);
	DanNinja.ninjaShoebox(BombFrag);
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________DAMAGE (50)__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.takeDamage(50);
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________REPAIR (45)__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.beRepaired(45);
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________REPAIR (5)__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.beRepaired(5);
	
	std::cout << "\x1b[1;33m__________________________________________________________REPAIR (1)__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.beRepaired(1);
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________DAMAGE (150)__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.takeDamage(150);
	std::cout << std::endl;
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________RANGED ATTACK__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.rangedAttack("Ennemy");
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________MELEE ATTACK__________________________________________________________\x1b[0m" << std::endl;
	DanNinja.meleeAttack("Ennemy");
	getchar();











	/* TESTS FOR RANGED ATTACK */
	// std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR RANGED ATTACKS__________________________________________________________\x1b[0m" << std::endl;
	// dan.takeDamage(105);
	// dan.rangedAttack("Mega man");
	// dan.beRepaired(100);
	// getchar();
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// dan.rangedAttack("Mega man");
	// std::cout << std::endl;
	// getchar();

	// /* TESTS FOR DAMAGE */
	// std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR DAMAGE__________________________________________________________\x1b[0m" << std::endl;
	// dan.takeDamage(2);
	// dan.takeDamage(-50);
	// dan.takeDamage(0);
	// dan.takeDamage(150);
	// dan.beRepaired(100);
	// dan.takeDamage(10);
	// dan.takeDamage(95);
	// dan.takeDamage(5);
	// dan.takeDamage(15);
	// dan.takeDamage(0);
	// dan.takeDamage(45);
	// dan.takeDamage(10);
	// std::cout << std::endl;
	// getchar();

	// /* TESTS FOR MELEE ATTACK */
	// std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR MELEE ATTACKS__________________________________________________________\x1b[0m" << std::endl;
	// dan.meleeAttack("Mega man");
	// dan.beRepaired(5);
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// dan.meleeAttack("Mega man");
	// std::cout << std::endl;
	// getchar();

	// /* TESTS FOR REPAIR */
	// std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR REPAIR__________________________________________________________\x1b[0m" << std::endl;
	// dan.takeDamage(2);
	// dan.beRepaired(2);
	// dan.beRepaired(-50);
	// dan.beRepaired(150);
	// dan.beRepaired(40);
	// dan.beRepaired(60);
	// dan.beRepaired(10);
	// dan.beRepaired(0);
	// dan.beRepaired(48);
	// dan.beRepaired(43);
	// std::cout << std::endl;
	// getchar();

	// /* TESTS FOR VAULTHUNTER ATTACK */
	// std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR VAULTHUNTER ATTACKS__________________________________________________________\x1b[0m" << std::endl;
	// dan.takeDamage(105);
	// dan.ninjaShoebox("Mega man");
	// dan.beRepaired(5);
	// dan.ninjaShoebox("Mega man");
	// dan.ninjaShoebox("Mega man");
	// dan.ninjaShoebox("Mega man");
	// dan.ninjaShoebox("Mega man");
	// dan.beRepaired(24);
	// dan.ninjaShoebox("Mega man");
	// dan.beRepaired(1);
	// dan.ninjaShoebox("Mega man");
	// std::cout << std::endl;
	// getchar();

	return (0);
}
