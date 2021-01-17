/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:05:26 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/16 15:42:53 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main()
{
	Human		bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
