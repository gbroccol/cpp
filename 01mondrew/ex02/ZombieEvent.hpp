/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 18:10:46 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 22:58:38 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>

class ZombieEvent {

	private:

		std::string		_type;

	public:

		ZombieEvent(void);
		~ZombieEvent(void);

		void	setZombieType(std::string a_type);
		Zombie	*newZombie(std::string a_name);
};

#endif
