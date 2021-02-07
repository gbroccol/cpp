/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:20:47 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/07 16:51:03 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Type::Type() : _DoubleValue(0) {}

Type::Type(std::string str) : _FloatValue(0),  _DoubleValue(0)
{
	if (str.length() == 1 && isdigit(str[0]) == 0)
	{
		_DoubleValue = static_cast <double>(str.c_str()[0]);
	}
	else
	{
		_FloatValue = std::stof(str);
		_DoubleValue = std::stod(str);
		_Sum = countPrecision(str);
	}
	
	ToChar();
	ToInt();
	ToFloat();
	ToDouble();

	return ;
	
}

Type::Type( const Type & src ) { *this = src; }

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Type::~Type() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// Type &				Type::operator=( Type const & rhs )
// {
// 	(void)rhs; // change
// 	return *this;
// }

// std::ostream &			operator<<( std::ostream & o, Type const & i ) // change
// {
// 	o << "String = " << i.getCharValue();
// 	return o;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/

int				Type::countPrecision(std::string str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '.')
		{
			i++;
			int sum = 0;
			while (str[i + sum] != '\0' && isdigit(str[i + sum]))
				sum++;
			return (sum == 0 ? 1 : sum);
		}
		i++;
	}
	return (1);
}

void					Type::ToChar(void)
{
	if (isnan(_DoubleValue) || isinf(_DoubleValue))
		std::cout << "char: impossible" << std::endl;
	else if (_DoubleValue > 255 || _DoubleValue < 0)
		std::cout << "char: impossible" << std::endl;
	else if (_DoubleValue >= 0 && _DoubleValue <= 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast <char> (_DoubleValue) << "'" << std::endl;
}

void					Type::ToInt(void)
{
	if (isnan(_DoubleValue) || isinf(_DoubleValue))
		std::cout << "int: impossible" << std::endl;
	else if (_DoubleValue > INT_MAX || _DoubleValue < INT_MIN)
		std::cout << "int: Non displayable" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(_DoubleValue) << std::endl;
}

void					Type::ToFloat(void)
{
	std::cout << "float: " << std::fixed<<std::setprecision(_Sum) << _FloatValue << "f" << std::endl;
}

void					Type::ToDouble(void)
{
	std::cout << "double: " << std::fixed<<std::setprecision(_Sum) << _DoubleValue << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */