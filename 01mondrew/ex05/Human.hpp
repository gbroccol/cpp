/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:12:57 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/30 23:01:56 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class	Human {

	private:

		std::string		_name;
		Brain const		_brain;

	public:
		Human(void);
		~Human(void);

		std::string		identify(void) const;
		Brain const		&getBrain(void) const;
};

#endif
