/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:18:37 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 23:01:20 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {

	private:

		unsigned short	_iq;
		std::string		_status;

	public:

		Brain(void);
		~Brain(void);

		std::string	identify(void) const;
};

#endif
