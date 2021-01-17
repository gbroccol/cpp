/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 21:48:04 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/17 21:48:04 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

// #include <>
// # include <string>
# include <iostream>
// # include <sstream>

class Fixed
{
private:
	
	int					value; // to store the fixed point value
	static const int	bits; // to store the number of fractional bits. This constant will always be the litteral 8.

public:
	
	Fixed(void);
	Fixed(Fixed const& new_fixed);
	~Fixed(void);

	int		getRawBits(void) const; // returns the raw value of the fixed point value
	void	setRawBits( int const raw ); // sets the raw value of the fixed point value.
	Fixed	& operator=(Fixed const & src);
};

#endif
