/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   macros.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 18:00:11 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/25 18:33:03 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// #define MAX(x, y, r) {	int x_ = x; \
// 						int y_  = y; \
// 						r = ((x_ > y_) ? x_ : y_); }

#define MAX(a, b, c) ( { __typeof__ (a) _a = (a); \
                         __typeof__ (b) _b = (b); \
                         c = _a > _b ? _a : _b; })

int main()
{
	// int a = 10;
	// int b = 20;
	// int c = 0;
	// std::cout << c << std::endl;

	// MAX(a, b, c); // теперь c равно 20
	// std::cout << c << std::endl;
	
	// MAX(a += b, b, c); // теперь a = с = 30
	// std::cout << c << std::endl;
	
	int a = 5;
	int b = 6;
	int c = 0;
	
	MAX(a++, b--, c); // теперь c = 6
	std::cout << c << std::endl;	

}