/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inout.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:35:46 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/25 18:46:15 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int count = 0;
	int i = 0;
	int j = 0;

	std::cin >> count;
	
	for ( ; count > 0; count--)
	{
		std::cin >> i >> j;
		std::cout << i + j << std::endl;
	}

    return 0;
}