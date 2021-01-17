/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:05:42 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/16 16:16:44 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <sstream>

class Brain
{
	private:
		unsigned int	size;
		unsigned int	weight;
	public:
		Brain(void);
		~Brain(void);
		std::string	identify(void) const;
};

#endif
