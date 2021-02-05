/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 15:24:49 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 16:51:06 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Type.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
		return (1);
	try
	{
		Type convert(argv[1]);
		// std::cout << "STRING (TEST): " << argv[1] << std::endl;
		// std::cout << "char: " << convert.getCharValue() << std::endl;
		// std::cout << "int: " << convert.getIntValue() << std::endl;
		// std::cout << "float: " << convert.getFloatValue() << std::endl;
		// std::cout << "double: " << convert.getDoubleValue() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0