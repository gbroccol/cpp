/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:30:04 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/10 13:48:44 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:

		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
		
	private:
	
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template <typename T>
void print( T const & value)
{
	std::cout << "Value is " << value << std::endl;
}

int main()
{
	std::cout << "\x1b[33;1m_________________________Test STRING__________________________\x1b[0m" << std::endl;
	std::string arr1[] = {"hi", "hello", "bie", "goobie"};
	iter(arr1, 4, print);
	std::cout<< std::endl;
	
	std::cout << "\x1b[33;1m_________________________Test INT__________________________\x1b[0m" << std::endl;
	int arr2[] = {1,2,3,4,5,6,7,8,9,0};
	iter(arr2, 10, print);
	std::cout<< std::endl;
	
	std::cout << "\x1b[33;1m_________________________Test DOUBLE__________________________\x1b[0m" << std::endl;
	double arr3[] = {100,200,300,400,500,600,700,800,900,1000};
	iter(arr3, 10, print);
	std::cout<< std::endl;
	
	std::cout << "\x1b[33;1m_________________________Test CHAR__________________________\x1b[0m" << std::endl;
	char arr4[] = {'a','b','c','d','e','f','g','h','i','j','k'};
	iter(arr4, 11, print);
	std::cout<< std::endl;
	
	std::cout << "\x1b[33;1m_________________________Test Class__________________________\x1b[0m" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter( tab, 5, print );
	iter( tab2, 5, print );
	std::cout<< std::endl;
}