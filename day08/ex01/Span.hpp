/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:03:05 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/25 16:20:48 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <set>
# include <iterator>

class Span
{

	public:

		Span( unsigned int n );
		Span( Span const & src );
		~Span( void );

		Span &		operator=( Span const & rhs );

		void		addNumber(int n);

		int			shortestSpan(void);
		int 		longestSpan(void);

		int 		getValue(unsigned long int index);
		

	private:
		
		std::multiset <int>		_Multiset;
		unsigned int			_Reserve;
		unsigned int			_Size;
		Span( void );

};

std::ostream &			operator<<( std::ostream & o, Span const & i );

#endif /* ************************************************************ SPAN_H */