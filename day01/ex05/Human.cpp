/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:05:45 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/15 21:17:45 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
	this->myBrain = Brain(32, 45);
	return ;
}

Human::~Human()
{
	return ;
}

std::string		Human::identify(void)
{
	std::string address = &this->myBrain;

	return(address);
}
