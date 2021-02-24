/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 13:21:01 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/24 16:54:41 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T>
typename T::iterator easyfind(T & cont, int value)
{
	typename T::iterator result = cont.begin();
	for ( ; result != cont.end(); ++result)
	{
		if (*result == value)
			return result;
	}
	if (result == cont.end())
		throw std::out_of_range("The number is not found"); 
    return result;
}

#endif