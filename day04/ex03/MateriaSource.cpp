/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:59 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/28 18:34:08 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _Amount(0), _MaxAmount(4)
{
	for(int i = 0; i < _MaxAmount; i++)
		_MatArray[i] = NULL;
	
	// std::cout << "\x1b[32m" << "MateriaSource DEFAULT CONSTRUCTOR" << "\x1b[0m" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	int i = 0;
	for (i = 0; i < src._Amount; i++)
		_MatArray[i] = src._MatArray[i]->clone();
	while (i < src._MaxAmount)
	{
		_MatArray[i] = NULL;
		i++;
	}
	_Amount = src.getAmount();
	_MaxAmount = src.getMaxAmount();
	
	// std::cout << "\x1b[32m" << "MateriaSource COPY CONSTRUCTOR" << "\x1b[0m" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for(int i = 0; i < _MaxAmount; i++)
	{
		if (_MatArray[i])
			delete _MatArray[i];
	}
}

/*
** get
*/

int									MateriaSource::getAmount(void) const { return (_Amount); }
int									MateriaSource::getMaxAmount(void) const { return (_MaxAmount); }

void 								MateriaSource::learnMateria(AMateria *mater)
{
	if (mater == NULL)
		std::cout << "\x1b[31m" << "Materia is NULL" << "\x1b[0m" << std::endl;
	else if (_Amount == _MaxAmount)
		std::cout << "\x1b[31m" << "Materia was not add. No space" << "\x1b[0m" << std::endl;
	else
	{
		for (int i = 0; i < _MaxAmount; i++)
		{
			if (!_MatArray[i])
			{
				_MatArray[i] = mater;
				// std::cout << "\x1b[32m" << "Materia is added" << "\x1b[0m" << std::endl;
				_Amount++;
				return;
			}
		}
	}
	
}

AMateria							*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _MaxAmount; i++)
	{
		if (_MatArray[i] && _MatArray[i]->getType() == type)
		{
			// std::cout << "\x1b[32m" << "Create materia. Type is " << type << ". Let's clone it" << "\x1b[0m" << std::endl;
			return _MatArray[i]->clone();
		}
	}
	// std::cout << "\x1b[31m" << "Wrong. I don't know this materia" << "\x1b[0m" << std::endl;
	return NULL;
}

/*
** overload 
*/

MateriaSource						& MateriaSource::operator=(MateriaSource const & src)
{
	int i = 0;
	for (i = 0; i < src._Amount; i++)
		_MatArray[i] = src._MatArray[i]->clone();
	while (i < src._MaxAmount)
	{
		_MatArray[i] = NULL;
		i++;
	}
	_Amount = src.getAmount();
	_MaxAmount = src.getMaxAmount();
	return *this;
}