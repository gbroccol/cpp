/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:15:29 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:40:31 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) {}

Enemy::Enemy( Enemy const & ClassToCopy )
{
	_HitPoints = ClassToCopy.getHP();
	_Type = ClassToCopy.getType();
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _HitPoints(hp), _Type(type) {}

Enemy::~Enemy()
{
}
		
std::string 				Enemy::getType() const
{
	return (_Type);
}

int							Enemy::getHP() const
{
	return (_HitPoints);
}

void						Enemy::takeDamage(int damage)
{
	if (damage <= 0)
	{
		// std::cout << "Too few damage for me" << std::endl;
		return ;
	}
	else if (_HitPoints <= damage)
	{
		_HitPoints = 0;
		// std::cout << "Critical d amage" << std::endl;
	}
	else
	{
		_HitPoints -= damage;
		// std::cout << "Oh, no..." << std::endl;
	}
}
	
/*
** overload
*/
Enemy						& Enemy::operator=(Enemy const & src)
{
	_HitPoints = src.getHP();
	_Type = src.getType();
	return *this;
}