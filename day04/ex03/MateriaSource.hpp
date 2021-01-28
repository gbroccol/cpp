/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:08:02 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/28 12:32:26 by gbroccol         ###   ########.fr       */
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
	
	AMateria		*_MatArray[4];
	int				_Amount;
	int				_MaxAmount;
	
public:
	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	virtual ~MateriaSource(void);
	
	/* get */
	int							getAmount(void) const;
	int							getMaxAmount(void) const;
	
	virtual void 				learnMateria(AMateria *mater);
	virtual AMateria* 			createMateria(std::string const & type);
	// AMateria**				copyMatArray() const ;
	
	/* overload */
	MateriaSource &				operator=(MateriaSource const & src);
	
};


#endif