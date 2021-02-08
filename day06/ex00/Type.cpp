/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:20:47 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/08 13:02:33 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Type::Type() {}

Type::Type(std::string str)
{
	int				Sum = 1;
	double			DoubleValue = 0;
	
	if (str.length() == 1 && isdigit(str[0]) == 0)
	{
		DoubleValue = static_cast <double>(str.c_str()[0]);
	}
	else
	{
		DoubleValue = std::stod(str);
		Sum = countPrecision(str);
	}
	
	ToChar(DoubleValue);
	ToInt(DoubleValue);
	ToFloat(DoubleValue, Sum);
	ToDouble(DoubleValue, Sum);

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

Type &				Type::operator=( Type const & rhs )
{
	(void)rhs;
	return *this;
}

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

void					Type::ToChar(double DoubleValue)
{
	if (isnan(DoubleValue) || isinf(DoubleValue))
		std::cout << "char: impossible" << std::endl;
	else if (DoubleValue > 255 || DoubleValue < 0)
		std::cout << "char: impossible" << std::endl;
	else if (DoubleValue >= 0 && DoubleValue <= 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast <char> (DoubleValue) << "'" << std::endl;
}

void					Type::ToInt(double DoubleValue)
{
	if (isnan(DoubleValue) || isinf(DoubleValue))
		std::cout << "int: impossible" << std::endl;
	else if (DoubleValue > INT_MAX || DoubleValue < INT_MIN)
		std::cout << "int: Non displayable" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(DoubleValue) << std::endl;
}

void					Type::ToFloat(double DoubleValue, int Sum)
{
	float FloatValue = static_cast <float>(DoubleValue);
	std::cout << "float: " << std::fixed<<std::setprecision(Sum) << FloatValue << "f" << std::endl;
}

void					Type::ToDouble(double DoubleValue, int Sum)
{
	std::cout << "double: " << std::fixed<<std::setprecision(Sum) << DoubleValue << std::endl;
}
