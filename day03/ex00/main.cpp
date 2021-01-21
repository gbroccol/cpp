/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:19:17 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 15:09:38 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl << "\x1b[1;33mWelcome to Borderlands!\x1b[0m" << std::endl;
	getchar();
	
	std::cout << "\x1b[1;33m__________________________________________________________CREATE ROBOTS__________________________________________________________\x1b[0m" << std::endl;
	std::cout << "\x1b[35;1m";
	FragTrap 		dan("Dandelion");
	dan.setNameColor("\x1b[35;1m");
	std::cout << std::endl;
	getchar();
	
	/* TESTS FOR RANGED ATTACK */
	std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR RANGED ATTACKS__________________________________________________________\x1b[0m" << std::endl;
	dan.takeDamage(105);
	dan.rangedAttack("Mega man");
	dan.beRepaired(100);
	getchar();
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	dan.rangedAttack("Mega man");
	std::cout << std::endl;
	getchar();

	/* TESTS FOR DAMAGE */
	std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR DAMAGE__________________________________________________________\x1b[0m" << std::endl;
	dan.takeDamage(2);
	dan.takeDamage(-50);
	dan.takeDamage(0);
	dan.takeDamage(150);
	dan.beRepaired(100);
	dan.takeDamage(10);
	dan.takeDamage(95);
	dan.takeDamage(5);
	dan.takeDamage(15);
	dan.takeDamage(0);
	dan.takeDamage(45);
	dan.takeDamage(10);
	std::cout << std::endl;
	getchar();

	/* TESTS FOR MELEE ATTACK */
	std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR MELEE ATTACKS__________________________________________________________\x1b[0m" << std::endl;
	dan.meleeAttack("Mega man");
	dan.beRepaired(5);
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	dan.meleeAttack("Mega man");
	std::cout << std::endl;
	getchar();

	/* TESTS FOR REPAIR */
	std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR REPAIR__________________________________________________________\x1b[0m" << std::endl;
	dan.takeDamage(2);
	dan.beRepaired(2);
	dan.beRepaired(-50);
	dan.beRepaired(150);
	dan.beRepaired(40);
	dan.beRepaired(60);
	dan.beRepaired(10);
	dan.beRepaired(0);
	dan.beRepaired(48);
	dan.beRepaired(43);
	std::cout << std::endl;
	getchar();

	/* TESTS FOR VAULTHUNTER ATTACK */
	std::cout << "\x1b[1;33m__________________________________________________________TESTS FOR VAULTHUNTER ATTACKS__________________________________________________________\x1b[0m" << std::endl;
	dan.takeDamage(105);
	dan.vaulthunter_dot_exe("Mega man");
	dan.beRepaired(5);
	dan.vaulthunter_dot_exe("Mega man");
	dan.vaulthunter_dot_exe("Mega man");
	dan.vaulthunter_dot_exe("Mega man");
	dan.vaulthunter_dot_exe("Mega man");
	dan.beRepaired(24);
	dan.vaulthunter_dot_exe("Mega man");
	dan.beRepaired(1);
	dan.vaulthunter_dot_exe("Mega man");
	std::cout << std::endl;
	getchar();

	return (0);
}
