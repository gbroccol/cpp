/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 22:48:14 by mondrew           #+#    #+#             */
/*   Updated: 2021/01/08 15:16:36 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>

class HumanA {

	private:

		std::string		_name;
		Weapon const	&_arsenal;

	public:

		HumanA(std::string const &a_name, Weapon const &a_arsenal);
		~HumanA(void);

		void			attack(void) const;
		std::string		convertNameToUpper(void) const;
		std::string		convertWeaponToUpper(void) const;

};

#endif
