/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:19:17 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/20 21:43:09 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl << "\x1b[1;33mWelcome to Borderlands!\x1b[0m" << std::endl;
	getchar();
	
	std::cout << "\x1b[35;1m";
	FragTrap 		dan("DANDELION");
	dan.setNameColor("\x1b[35;1m");
	std::cout << std::endl;
	getchar();
	
	std::cout << "\x1b[36;1m";
	FragTrap		toy("TOY LOADER");
	toy.setNameColor("\x1b[36;1m");
	std::cout << std::endl;
	getchar();
	
	dan.rangedAttack(toy.getName());
	toy.takeDamage((int)20);
	std::cout << std::endl;
	getchar();

	dan.meleeAttack(toy.getName());
	toy.takeDamage((int)30);
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe(toy.getName());
	toy.takeDamage((int)50);
	std::cout << std::endl;
	getchar();
	
	dan.beRepaired(-50);
	dan.beRepaired(150);
	dan.beRepaired(50);
	dan.beRepaired(45);
	std::cout << std::endl;
	getchar();

	toy.beRepaired(10);
	toy.beRepaired(0);
	toy.beRepaired(75);
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe(toy.getName());
	toy.takeDamage((int)50);
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe(toy.getName());
	toy.takeDamage((int)50);
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe(toy.getName());
	toy.takeDamage((int)50);
	std::cout << std::endl;
	getchar();
	
	dan.vaulthunter_dot_exe(toy.getName());
	toy.takeDamage((int)50);
	std::cout << std::endl;
	getchar();

	dan.vaulthunter_dot_exe(toy.getName());
	toy.takeDamage((int)50);
	std::cout << std::endl;
	getchar();
	
	toy.rangedAttack(dan.getName());
	toy.meleeAttack(dan.getName());
	toy.vaulthunter_dot_exe(dan.getName());
	std::cout << std::endl;
	getchar();
}