/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 22:33:29 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/08 15:15:41 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {

	private:

		std::string			_type;

	public:

		Weapon(std::string const &a_type);
		~Weapon(void);

		std::string const	&getType(void) const;
		void				setType(std::string n_type);

};

#endif
