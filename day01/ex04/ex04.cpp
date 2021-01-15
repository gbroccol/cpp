/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:50:14 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 21:02:50 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string		message = "HI THIS IS BRAIN";
	
	std::string		*pointer = &message;
	std::string		&reference = message;

	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;

	return (0);
}
