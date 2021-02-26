/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:03:09 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/26 12:55:52 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() {}

Span::Span( unsigned int n ) : _Reserve(n), _Size(0)
{
	if ((int) n < 0)
		throw std::invalid_argument("Wrong number (negative)");
}

Span::Span( const Span & src ) : _Reserve(src._Reserve), _Size(src._Size)
{
	_Multiset.clear();
	_Multiset = src._Multiset;
}

// /*
// ** -------------------------------- DESTRUCTOR --------------------------------
// */

Span::~Span()
{
}


// /*
// ** --------------------------------- OVERLOAD ---------------------------------
// */

Span &							Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		_Multiset.clear();
		_Multiset = rhs._Multiset;
		_Reserve = rhs._Reserve;
		_Size = rhs._Size;
	}
	return *this;
}

// /*
// ** --------------------------------- METHODS ----------------------------------
// */

void							Span::addNumber(int n)
{
	if (_Multiset.size() < _Reserve)
		_Multiset.insert(n);
	else
		throw std::length_error("No more free space");
}

int								Span::shortestSpan(void)
{
	
	std::multiset<int> :: iterator start = _Multiset.begin();
	std::multiset<int> :: iterator finish = _Multiset.end();
	
	if (_Multiset.size() == 0)
		throw std::invalid_argument("Error. String's size is 0");

	if (_Multiset.size() == 1)
		throw std::invalid_argument("Error. String's size is 1");
	
	int pre = *start;
	start++;

	int min = std::numeric_limits<int>::max();

	for ( ; start != finish; start++)
	{
		if (min > (*start - pre))
			min = *start - pre;
		pre = *start;
	}
	return min;
}

int								Span::longestSpan(void)
{
	if (_Multiset.size() == 0)
		throw std::invalid_argument("Error. String's size is 0");

	if (_Multiset.size() == 1)
		throw std::invalid_argument("Error. String's size is 1");
	
	std::multiset<int> :: iterator start = _Multiset.begin();
	std::multiset<int> :: iterator finish = _Multiset.end();
	
	finish--;
	
	return (*finish - *start);
}

int								Span::getValue(unsigned long int index)
{
	if ((int) index < 0)
		throw std::invalid_argument("Wrong number (negative)");

	if (_Multiset.size() == 0 || _Multiset.size() < (index + 1))
		throw std::invalid_argument("Error. No such index");

	std::multiset<int> :: iterator start = _Multiset.begin();
	for ( ; index > 0; index--)
		start++;
	return (*start);
}
