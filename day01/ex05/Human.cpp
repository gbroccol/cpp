/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:05:45 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/16 16:03:58 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <string>

Human::Human(void)
{
	return ;
}

Human::~Human(void)
{
	return ;
}

Brain 	const	&Human::getBrain(void) const
{
	return this->myBrain;
}

std::string		Human::identify(void) const
{
	return (getBrain().identify());
}
