/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:04:05 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/25 17:25:04 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int power(int x, unsigned p)
{
	if (x == 0)
		return (0);
	
	int answer = 1;
    for ( ; p > 0; p--)
		answer = answer * x;
    return answer;
}

int main()
{
	std::cout << power(0, 0) << std::endl; // 0
	std::cout << power(2, 0) << std::endl; // 1
	std::cout << power(2, 1) << std::endl; // 2 
	std::cout << power(2, 2) << std::endl; // 4
	std::cout << power(2, 3) << std::endl; // 8
	std::cout << power(2, 4) << std::endl; // 16
	std::cout << power(2, 5) << std::endl << std::endl; // 32
	
	std::cout << power(-2, 0) << std::endl;
	std::cout << power(-2, 1) << std::endl; // -2 
	std::cout << power(-2, 2) << std::endl; // 4
	std::cout << power(-2, 3) << std::endl; // -8
	std::cout << power(-2, 4) << std::endl; // 16
	std::cout << power(-2, 5) << std::endl << std::endl; // -32
 
	return 0;
}