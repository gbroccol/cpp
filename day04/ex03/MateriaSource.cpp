/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:59 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 20:35:04 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
}

MateriaSource::MateriaSource(MateriaSource const & ClassToCopy)
{
	
}

MateriaSource::~MateriaSource(void)
{
}

void 								MateriaSource::learnMateria(AMateria *mater)
{
	
}

AMateria							*MateriaSource::createMateria(std::string const & type)
{
	
}

/*
** overload 
*/

MateriaSource						& MateriaSource::operator=(MateriaSource const & src)
{
	return *this;
}