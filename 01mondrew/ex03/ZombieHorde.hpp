/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 00:08:00 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 23:00:31 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieHorde {

	private:

		int		_N;
		Zombie	*_horde;

	public:

		ZombieHorde(int a_N);
		~ZombieHorde(void);

		int		getNumber(void);
		Zombie	*getArray(void);
		void	announce(void);
};

#endif
