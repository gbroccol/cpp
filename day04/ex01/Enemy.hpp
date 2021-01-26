/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:07:59 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 17:40:41 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <iomanip>

class Enemy
{
	private:

	protected:
		
		int				_HitPoints;
		std::string		_Type;
		Enemy(void);
		
	public:

		Enemy( Enemy const & ClassToCopy );
		Enemy(int hp, std::string const & type);
		virtual ~Enemy(void);
		
		std::string				getType(void) const;
		int						getHP(void) const;
		virtual void			takeDamage(int damage);
	
		/* overload */
		Enemy			&operator=(Enemy const & src);
};

#endif
