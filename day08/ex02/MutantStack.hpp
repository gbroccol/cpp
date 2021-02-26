/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:27:25 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/26 12:51:25 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>		// adapter	LIFO
// Container c			// the underlying container (protected member object)

# include <vector>		// container
# include <list>		// container
# include <deque>		// container

template <typename T>

class MutantStack : public std::stack<T>
{
	public:
		
		MutantStack() : std::stack<T>() {}
		MutantStack( MutantStack<T> const & src ) : std::stack<T>(src) {}
		
		~MutantStack() {}
		
		MutantStack &		operator=( MutantStack const & rhs )
		{
			if (this != &rhs)
				this->c = rhs.c;
			return *this;
		}
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}
		
	private:
};

// std::ostream &			operator<<( std::ostream & o, MutantStack const & i );

#endif /* ***************************************************** MUTANTSTACK_H */