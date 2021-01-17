/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 21:47:52 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/17 21:47:52 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void) : value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const& new_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = new_fixed;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & new_fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &new_fixed)
		this->value = new_fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void		Fixed::setRawBits( int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
	return;
}
