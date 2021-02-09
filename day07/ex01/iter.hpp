/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:30:16 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/09 18:58:27 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void iter(T * array, int len, void(*func)(T const & f))
{
	if (!array || len <= 0)
		return ;
	for (int i = 0; i < len; i++)
		func(array[i]);
}

#endif