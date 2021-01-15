/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 19:24:44 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 20:01:22 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie			*zmb;
	int				nmb;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	
	void	announce(void);
};

#endif