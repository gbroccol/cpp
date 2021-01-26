/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:51:21 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/26 21:54:26 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _ColorStart("\x1b[31m"), _ColorFinish("\x1b[0m")
{
	_UnitsNmb = 0;
	_Squad = NULL;
}

Squad::Squad( Squad const & ClassToCopy ) : _ColorStart("\x1b[31m"), _ColorFinish("\x1b[0m") // change
{
	_UnitsNmb = ClassToCopy.getCount();
	_Squad = ClassToCopy.copySquad();
	return ;
}

Squad::~Squad(void)
{
	removeSquad();
}

/*
** get
*/
int					Squad::getCount() const { return(_UnitsNmb); }

ISpaceMarine		*Squad::getUnit(int unit) const
{
	if (unit <= _UnitsNmb)
	{
		if (unit >= 0)
		{
			return _Squad[unit];
		}
	}
	return (NULL);
}

int					Squad::push(ISpaceMarine *NewUnit)
{
	int i;

	if (_Squad != NULL)
	{
		i = 0;
		while (i < _UnitsNmb)
		{
			if (_Squad[i] == NewUnit)
			{
				std::cout << _ColorStart << "Already have such squad" << _ColorFinish << std::endl;
				return (_UnitsNmb);
			}
			i++;
		}
	}
	if (NewUnit != NULL)
	{
		ISpaceMarine **newSquad = new ISpaceMarine * [_UnitsNmb + 1];
		
		i = 0;
		while (i < _UnitsNmb)
		{
			newSquad[i] = _Squad[i];
			i++;
		}
		newSquad[i] = NewUnit;
		_UnitsNmb++;
		_Squad = newSquad;
	}
	else
		std::cout << _ColorStart << "Squad is not exist" << _ColorFinish << std::endl;
	return (_UnitsNmb);
}

void			Squad::removeSquad(void)
{
	int i = 0;

	if (_Squad != NULL)
	{
		while (i < _UnitsNmb)
		{
			delete _Squad[i];
			i++;
		}
		_UnitsNmb = 0;
		delete [] _Squad;
		_Squad = NULL;
	}
}

ISpaceMarine**		Squad::copySquad() const
{
	ISpaceMarine**	NewCopy = NULL;

	if (_UnitsNmb > 0)
	{
		int i = 0;
		NewCopy = new ISpaceMarine * [_UnitsNmb];
		while (_UnitsNmb > i)
		{
			ISpaceMarine *NewUnit = this->getUnit(i)->clone();
			NewCopy[i] = NewUnit;
			i++;
		}
	}
	return (NewCopy);
}

/*
** overload
*/

Squad				&Squad::operator=(Squad const & src)
{
	_ColorStart = "\x1b[31m";
	_ColorFinish = "\x1b[0m";
	_UnitsNmb = src.getCount();
	this->removeSquad();
	_Squad = src.copySquad();
	return *this;
}
