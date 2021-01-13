/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 23:35:00 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/08 15:17:54 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>

class HumanB {

	private:

		std::string 	_name;
		Weapon			*_arsenal;

	public:

		HumanB(std::string const &a_name);
		~HumanB(void);

		void			attack(void) const;
		void			setWeapon(Weapon *a_arsenal);
		std::string		convertNameToUpper(void) const;
		std::string		convertWeaponToUpper(void) const;

};

#endif
