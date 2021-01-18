/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:34:20 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 20:03:11 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void) : value(0)
{
	std::cout << "\x1b[31mDefault constructor called\x1b[0m" << std::endl;
	return ;
}

Fixed::Fixed(int int_value) : value(int_value << this->bits)
{
	std::cout << "\x1b[31mInt constructor called\x1b[0m" << std::endl;
}

Fixed::Fixed(float float_value) : value(roundf(float_value * (1 << this->bits))) 	// 2^8 = 256
{
	std::cout << "\x1b[31mFloat constructor called\x1b[0m" << std::endl;
}

Fixed::Fixed(Fixed const &new_fixed)
{
	std::cout << "\x1b[31mCopy constructor called\x1b[0m" << std::endl;
	*this = new_fixed; 																// скопировать значения в this
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "\x1b[31mDestructor called\x1b[0m" << std::endl;
	return ;
}

Fixed			&Fixed::operator=(Fixed const &new_fixed)
{
	std::cout << "\x1b[36mAssignation operator called\x1b[0m" << std::endl;
	this->value = new_fixed.getRawBits();
	return *this;
}

int 			Fixed::getRawBits( void ) const
{
	return this->value;
}

void			Fixed::setRawBits( int const raw)
{
	this->value = raw;
	return;
}

int				Fixed::toInt(void) const
{
	return (this->value >> this->bits);
}

float			Fixed::toFloat(void) const
{
	return (this->value / roundf(1 << this->bits));					// 2^8 = 256 
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)		// в какой поток записывать // с каким классом работать
{
	o << src.toFloat();
	return o;
}