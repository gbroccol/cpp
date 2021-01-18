/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 17:25:04 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/18 20:03:47 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include  <cmath>

class Fixed
{
private:
	
	int					value; 							// to store the fixed point value
	static const int	bits; 							// to store the number of fractional bits. This constant will always be the litteral 8.

public:
	
	Fixed( void );										// CONONICAL FORM
	Fixed( int value );
	Fixed( float float_value );
	Fixed( Fixed const & new_fixed );					// CONONICAL FORM
	
	~Fixed(void);										// CONONICAL FORM

	int				getRawBits(void) const; 			// returns the raw value of the fixed point value
	void			setRawBits( int const raw ); 		// sets the raw value of the fixed point value.
	Fixed			&operator=(Fixed const & src);		// CONONICAL FORM

	float			toFloat(void) const;
	int				toInt(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const &src);

#endif
