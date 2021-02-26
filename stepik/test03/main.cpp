/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:54:27 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/26 16:32:10 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

using namespace std;

void roots(int a, int b, int c)
{
	double result = 0;
	double D = 0;

	D = (pow(b, 2)) - (4 * a * c);

	if (D < 0)
		std::cout << "No real roots" << std::endl;
	else if (D == 0) // 1
	{
		result = (sqrt(D) - b) / (2 * a);
		std::cout << result << " " << result << std::endl;
	}
	else if (D > 0) // 2
	{
		result = ( - b - sqrt(D)) / (2 * a);
		std::cout << result << " ";
		result = ( - b + sqrt(D)) / (2 * a);
		std::cout << result << std::endl;
	}
}

int main()
{
    int a, b, c;

	// std::cin >> a >> b >> c;

	a = 1;
	b = 4;
	c = 4;
	roots(a, b, c);

	a = 1;
	b = 0;
	c = 1;
	roots(a, b, c);

	a = 1;
	b = 0;
	c = 0;
	roots(a, b, c);

	a = 2;
	b = 7;
	c = 4;
	roots(a, b, c);

std::cout << "_________" << std::endl;

	a = 1;
	b = -2;
	c = -3;
	roots(a, b, c);

	a = -1;
	b = -2;
	c = 15;
	roots(a, b, c);

	a = 1;
	b = 12;
	c = 36;
	roots(a, b, c);

	// a = 2;
	// b = 7;
	// c = 4;
	// roots(a, b, c);
	
    return 0;
}
