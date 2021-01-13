/* ************************************************************************** */ /*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 18:44:54 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/13 23:42:15 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <string>

int		main(void)
{
	unsigned int	number_of_zombies = 0;
	ZombieHorde		zombies(number_of_zombies);

	std::cout << "Look, heap zombies are coming into our ship!" << std::endl;
	zombies.announce();
	std::cout << "Now we are ready to leave this ship and blow it up!" << std::endl;
	std::cout << "[BOOM!!!]" << std::endl;
	return (0);
}
