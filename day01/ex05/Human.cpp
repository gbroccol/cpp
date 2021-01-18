/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:05:45 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 15:10:38 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return ;
}

Human::~Human(void)
{
	return ;
}

Brain 	const	&Human::getBrain(void) const  // возвращает ссыску на BRAIN
{
	return this->myBrain;
}

std::string		Human::identify(void) const
{
	return (getBrain().identify());
}
