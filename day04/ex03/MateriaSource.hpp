/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:08:02 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/27 20:34:58 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <iomanip>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	
	int				_Amount;
	int				_MaxAmount;
	AMateria		**_MatArray;
	
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & ClassToCopy);
	virtual ~MateriaSource(void);
	
	virtual void learnMateria(AMateria *mater);
	virtual AMateria* createMateria(std::string const & type);
	
	/* overload */
	MateriaSource						& operator=(MateriaSource const & src);
	
};


#endif