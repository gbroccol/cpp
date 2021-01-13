/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:30:22 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 22:57:45 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {

	private:

		std::string		_name;
		std::string 	_type;

	public:

		Zombie(std::string a_name, std::string a_type);
		~Zombie(void);

		void	announce(void);
};

#endif
