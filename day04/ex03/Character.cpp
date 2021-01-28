/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:07:33 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/28 18:33:22 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _Name("DefaultName"), _MaterMax(4), _MaterAmount(0)
{
	for (int i = 0; i < _MaterMax; i++)
		_MyMater[i] = NULL;

	// std::cout << "\x1b[32m" << "Character(" << _Name << ") was created!" << "\x1b[0m" << std::endl;
}

Character::Character(std::string const & name) : _Name(name), _MaterMax(4), _MaterAmount(0)
{
	for (int i = 0; i < _MaterMax; i++)
		_MyMater[i] = NULL;
	// std::cout << "\x1b[32m" << "Character(" << _Name << ") was created!" << "\x1b[0m" << std::endl;
}

Character::Character( Character const & ClassToCopy )
{
	// std::cout << "\x1b[32m" << "Character COPY CONTRACTOR" << "\x1b[0m" << std::endl;
	
	_Name = ClassToCopy.getName();
	_MaterMax = ClassToCopy.geMaterMax();
	_MaterAmount = ClassToCopy.getMaterAmount();
	
	int i = 0;
	for (i = 0; i < ClassToCopy._MaterAmount; i++)
		_MyMater[i] = ClassToCopy._MyMater[i]->clone();
	while (i < ClassToCopy._MaterMax)
	{
		_MyMater[i] = NULL;
		i++;
	}
}

Character::~Character(void)
{
	removeMater();
}

void			Character::removeMater(void)
{
	int i = 0;

	while (i < _MaterAmount)
	{
		if (_MyMater[i] != NULL)
			delete _MyMater[i];
		_MyMater[i] = NULL;
		i++;
	}
	_MaterAmount = 0;
}

void							Character::equip(AMateria *mater)
{
	if (_MaterAmount == _MaterMax)
	{
		// std::cout << "\x1b[31m" << "There is no space to add new materia" << "\x1b[0m" << std::endl;
	}
	else if (mater == NULL)
	{
		// std::cout << "\x1b[31m" << "Materia is NULL" << "\x1b[0m" << std::endl;
	}
	else if (_MyMater[0] == mater || _MyMater[1] == mater || _MyMater[2] == mater || _MyMater[3] == mater)
	{
		// std::cout << "\x1b[31m" << "I already have such materia" << "\x1b[0m" << std::endl;
	}
	else
	{
		for (int i = 0; i < _MaterMax; i++)
		{
			if (_MyMater[i] == NULL)
			{
				_MyMater[i] = mater->clone();
				_MaterAmount++;
				return ;
			}	
		}
	}
	
}

void							Character::unequip(int idx)
{
	if (idx < 0 || idx >= _MaterAmount)
	{
		// std::cout << "\x1b[31m" << "There is no such materia" << "\x1b[0m" << std::endl;
	}
	else
	{
		// delete _MyMater[idx];
		// _MyMater[idx] = NULL;
		for (int i = idx; i < _MaterMax; i++)
		{
			if ((i + 1) < _MaterMax)
				_MyMater[i] = _MyMater[i + 1];
			else
				_MyMater[i] = NULL;
		}
		// std::cout << "\x1b[32m" << "successful delete materia (" << idx << ")" << "\x1b[0m" << std::endl;
		_MaterAmount--;
		
	}
}

void							Character::use(int idx, ICharacter &target)
{	
	if (idx < 0)
		std::cout << "\x1b[31m" << "This index (" << idx << ") does not exist" << "\x1b[0m" << std::endl;
	else if (idx >= _MaterAmount)
		std::cout << "\x1b[31m" << "There is not materia for this index (" << idx << ")" << "\x1b[0m" << std::endl;
	else 
		_MyMater[idx]->use(target);
}

/*
** get 
*/

std::string const				& Character::getName() const { return (_Name); }
int const						& Character::geMaterMax() const { return (_MaterMax); }
int const						& Character::getMaterAmount() const { return (_MaterAmount); }

/*
** overload 
*/

Character						& Character::operator=(Character const & src)
{
	removeMater();
	
	_Name = src.getName();
	_MaterMax = src.geMaterMax();
	_MaterAmount = src.getMaterAmount();

	int i = 0;
	for (i = 0; i < _MaterAmount; i++)
		_MyMater[i] = src._MyMater[i]->clone();
	while (i < src._MaterMax)
	{
		_MyMater[i] = NULL;
		i++;
	}

	return *this;
}
