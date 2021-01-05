/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:44:11 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/05 20:46:06 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
}


// Again, a simple exercise.
// You must turn in the following function, after correcting the memory leak contained
// in it.
// Of course, you must play with the memory allocation/deallocation here. Simply removing the variable, or otherwise fiddling around the problem without actually sorting
// it out, will be considered a wrong answer...