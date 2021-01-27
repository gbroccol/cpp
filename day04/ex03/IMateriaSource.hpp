/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:55 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 20:22:59 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include <iomanip>
#include "AMateria.hpp"

class IMateriaSource
{
	public:

		virtual ~IMateriaSource(void) {}
		virtual void learnMateria(AMateria *mater) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
		
};

#endif