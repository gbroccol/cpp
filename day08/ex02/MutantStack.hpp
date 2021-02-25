/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:27:25 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/25 16:56:26 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
// # include <>

// class MutantStack
// {

// 	public:

// 		MutantStack();
// 		MutantStack( MutantStack const & src );
// 		~MutantStack();

// 		MutantStack &		operator=( MutantStack const & rhs );

// 	private:

// };

// std::ostream &			operator<<( std::ostream & o, MutantStack const & i );


template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack(){return ;}
		MutantStack( MutantStack<T> const & src ){*this = src;}
		~MutantStack(){return;}
		MutantStack &		operator=( MutantStack const & rhs )
		{
			this = rhs;
			return *this;
		}
		iterator begin(){return this->c.begin();}
		iterator end(){return this->c.end();}
		
	private:
};


#endif /* ***************************************************** MUTANTSTACK_H */