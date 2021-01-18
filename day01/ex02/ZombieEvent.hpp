/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 12:19:10 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 11:32:16 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string		type;
	
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void			setZombieType(std::string type);
	Zombie*			newZombie(std::string name);
	void			randomChump(void);
};

#endif
