/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 15:06:11 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 22:56:43 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class Pony {

	private:

		std::string		_name;
		std::string		_color;

	public:

		Pony(std::string a_name, std::string a_color);
		~Pony(void);

		std::string	getName(void);
		void		sing(void);
		void		eat_rainbow(void);
		void		sleep();
};

#endif
