/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:20:47 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 17:05:50 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Type::Type() {}

Type::Type(std::string str) : _Str(str), _CharValue('z'), _IntValue(-1), _FloatValue(-1.0), _DoubleValue(-1.0)
{
	convertToInt();
	convertToFloat();
	convertToFloat();
	convertToChar();
	
	// std::cout << "STRING (TEST): " << str << std::endl;
	std::cout << "char: " << _CharValue << std::endl;
	std::cout << "int: " << _IntValue << std::endl;
	std::cout << "float: " << _FloatValue << std::endl;
	std::cout << "double: " << _DoubleValue << std::endl;
}

Type::Type( const Type & src )
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Type::~Type() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Type &				Type::operator=( Type const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Type const & i ) // change
{
	o << "String = " << i.getCharValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void					Type::convertToChar(void)
{
	_CharValue = static_cast <char> (_IntValue);
}

void					Type::convertToInt(void)
{
	
	_IntValue = std::stoi( _Str );
	
}

void					Type::convertToFloat(void)
{
	_FloatValue = static_cast <float> (_IntValue);
}

void					Type::convertToDouble(void)
{
	_DoubleValue = static_cast <double> (_IntValue);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

char					Type::getCharValue(void) const { return(_CharValue); }
int						Type::getIntValue(void) const { return(_IntValue); }
float					Type::getFloatValue(void) const { return(_FloatValue); }
double					Type::getDoubleValue(void) const { return(_DoubleValue); }

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */