/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:19:10 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/13 14:20:48 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
#include <iostream> // ?
#include <string> // ?
#include <iomanip> // ?

class ZombieEvent
{
private:
	
public:
	ZombieEvent();
	~ZombieEvent();
	void			setZombieType();
	Zombie*			newZombie(std::string name);
	std::string		randomChump();
};

#endif
