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
#include "SuperTrap.hpp"

int main()
{
	std::cout << std::endl << "\x1b[1;33mWelcome to Borderlands!\x1b[0m" << std::endl;
	getchar();
	std::system("clear");
	
	std::cout << "\x1b[1;33m__________________________________________________________CREATE ENNEMIS__________________________________________________________\x1b[0m" << std::endl;
	NinjaTrap 		Ninja("Ninja Robot");
	std::cout << std::endl;
	ScavTrap 		Scav("Scav Robot");
	std::cout << std::endl;
	FragTrap 		Frag("Frag Robot");
	std::cout << std::endl;
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________CREATE SUPER TRAP__________________________________________________________\x1b[0m" << std::endl;
	SuperTrap 		LeoNinja("Super");
	std::cout << std::endl;
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________RANGED ATTACK__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.rangedAttack("Ennemy");
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________MELEE ATTACK__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.meleeAttack("Ennemy");
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________CHALLENGE__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.ninjaShoebox(Ninja);
	LeoNinja.ninjaShoebox(Scav);
	LeoNinja.ninjaShoebox(Frag);
	LeoNinja.ninjaShoebox(Ninja);
	LeoNinja.ninjaShoebox(Frag);
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________VAULTHUNTER__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.vaulthunter_dot_exe("Ennemy");
	LeoNinja.vaulthunter_dot_exe("Ennemy");
	LeoNinja.vaulthunter_dot_exe("Ennemy");
	LeoNinja.vaulthunter_dot_exe("Ennemy");
	LeoNinja.vaulthunter_dot_exe("Ennemy");
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________DAMAGE (50)__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.takeDamage(50);
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________REPAIR (45)__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.beRepaired(45);
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________REPAIR (75)__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.beRepaired(75);
	
	std::cout << "\x1b[1;33m__________________________________________________________REPAIR (1)__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.beRepaired(1);
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________DAMAGE (105)__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.takeDamage(105);
	std::cout << std::endl;
	getchar();
	std::system("clear");

	std::cout << "\x1b[1;33m__________________________________________________________RANGED ATTACK__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.rangedAttack("Ennemy");
	std::cout << std::endl;

	std::cout << "\x1b[1;33m__________________________________________________________MELEE ATTACK__________________________________________________________\x1b[0m" << std::endl;
	LeoNinja.meleeAttack("Ennemy");
	getchar();

	return (0);
}
