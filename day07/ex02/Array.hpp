/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:31:47 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/10 15:46:23 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>

template <typename T>

class Array
{

	public:

		/*
		** ------------------------------- CONSTRUCTOR --------------------------------
		*/
		Array()
		{
			_data = new T[0];
			_len = 0;
		}
		
		Array(int n)
		{
			if (n < 0)				
				throw(ExceptionLen());
			
			_data = new T[n];
			_len = n;

			for (unsigned int i = 0; i < _len; i++)
				_data[i] = '\0';
		}

		Array( Array const & src )
		{
			_len = src.size();

			_data = new T[_len];
			for (unsigned int i = 0; i < _len; i++)
				_data[i] = src._data[i];
		}

		/*
		** ------------------------------- DESTRUCTOR --------------------------------
		*/
		~Array()
		{
			delete[] _data;
			_data = nullptr;
			_len = 0;
		}

		/*
		** --------------------------------- OVERLOAD ---------------------------------
		*/
		Array &		operator=( Array const & rhs )
		{
			if ( this != &rhs )
			{
				_len = rhs.size();
				
				delete [] _data;
				_data = new T[_len];
				for (unsigned int i = 0; i < _len; i++)
					_data[i] = rhs._data[i];
			}
			return *this;
		}

		T &			operator[](int index)
		{
			if (index < 0 || (unsigned int)index > _len || _len == 0)
				throw(ExceptionLen());
			return _data[index];
		}

		/*
		** ------------------------------- EXCEPTION --------------------------------
		*/
		class ExceptionLen : public std::exception
		{
			public:
				virtual const char* 	what(void) const throw()
				{
					return "Wrong length";
				}
		};

		/*
		** ------------------------------- MERHODS --------------------------------
		*/

		unsigned int			size(void) const { return (_len); }

	private:

		unsigned int	_len;
        T 				*_data;

};

#endif /* *********************************************************** ARRAY_H */