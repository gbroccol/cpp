/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:05:40 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/16 16:16:50 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) : size(42), weight(30)
{
	std::cout << "New brain is created" << std::endl;
	std::cout << "Size is " << this->size << std::endl;
	std::cout << "Weight is " << this->weight << std::endl;
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string				Brain::identify(void) const
{
	std::stringstream	address;
	address << this;
	return (address.str());
}
