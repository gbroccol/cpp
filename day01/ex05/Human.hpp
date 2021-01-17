/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:05:48 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/16 16:04:03 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class	Human {

	private:
		Brain const		myBrain;
	public:
		Human(void);
		~Human(void);

		std::string		identify(void) const;
		Brain 	const		&getBrain(void) const;
};

#endif
