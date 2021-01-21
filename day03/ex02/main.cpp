/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:19:17 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/21 18:58:55 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << std::endl << "\x1b[1;33mWelcome to Borderlands!\x1b[0m" << std::endl;
	getchar();
	
	std::cout << "\x1b[1;33m__________________________________________________________CREATE ROBOTS__________________________________________________________\x1b[0m" << std::endl;
	std::cout << "\x1b[35;1m";
	FragTrap 		dan("Dandelion");
	dan.setNameColor("\x1b[35;1m");
	std::cout << "\x1b[36;1m";
	ScavTrap 		golden("The Golden Army");
	golden.setNameColor("\x1b[36;1m");
	std::cout << std::endl;
	getchar();

	std::cout << "\x1b[1;33m__________________________________________________________DAMAGE__________________________________________________________\x1b[0m" << std::endl;
	dan.takeDamage(105);
	golden.takeDamage(105);
	std::cout << std::endl;
	getchar();
	
	std::cout << "\x1b[1;33m__________________________________________________________ATTACKS__________________________________________________________\x1b[0m" << std::endl;
	dan.rangedAttack("Mega man");
	golden.rangedAttack("Mega man");
	std::cout << std::endl;
	getchar();
	
	std::cout << "\x1b[1;33m__________________________________________________________REPAIRED__________________________________________________________\x1b[0m" << std::endl;
	dan.beRepaired(5);
	golden.beRepaired(5);
	std::cout << std::endl;
	getchar();
	
	std::cout << "\x1b[1;33m__________________________________________________________ATTACKS__________________________________________________________\x1b[0m" << std::endl;
	dan.meleeAttack("Mega man");
	golden.meleeAttack("Mega man");
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe("Mega man");
	golden.challengeNewcomer("Mega man");
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe("Mega man");
	golden.challengeNewcomer("Mega man");
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe("Mega man");
	golden.challengeNewcomer("Mega man");
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe("Mega man");
	golden.challengeNewcomer("Mega man");
	std::cout << std::endl;
	getchar();

	std::cout << "\x1b[1;33m__________________________________________________________DAMAGE__________________________________________________________\x1b[0m" << std::endl;
	dan.takeDamage(-105);
	golden.takeDamage(-105);
	std::cout << std::endl;
	getchar();

	dan.takeDamage(0);
	golden.takeDamage(0);
	std::cout << std::endl;
	getchar();

	dan.takeDamage(2);
	golden.takeDamage(2);
	std::cout << std::endl;
	getchar();

	std::cout << "\x1b[1;33m__________________________________________________________REPAIRED__________________________________________________________\x1b[0m" << std::endl;
	dan.beRepaired(-105);
	golden.beRepaired(-105);
	std::cout << std::endl;
	getchar();

	dan.beRepaired(0);
	golden.beRepaired(0);
	std::cout << std::endl;
	getchar();

	dan.beRepaired(2);
	golden.beRepaired(2);
	std::cout << std::endl;
	getchar();

	std::cout << "\x1b[1;33m__________________________________________________________DAMAGE__________________________________________________________\x1b[0m" << std::endl;
	dan.takeDamage(5);
	golden.takeDamage(3);
	std::cout << std::endl;
	getchar();

	dan.takeDamage(6);
	golden.takeDamage(4);
	std::cout << std::endl;
	getchar();

	return (0);
}
