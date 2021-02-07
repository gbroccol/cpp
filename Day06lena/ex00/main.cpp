/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.21.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:09:05 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/04 16:13:20 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Types.hpp"

int main(int argc, char **argv)
{
	try
	{
		if(argc == 2)
		{
			Types value(argv[1]);
		}
		else
			throw Types::error();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}