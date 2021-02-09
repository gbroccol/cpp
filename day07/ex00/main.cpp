/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 14:45:39 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/09 16:18:49 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

class Awesome
{
	public:

		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		int  getN(void) const { return (this->_n); }
			
	private:
		
		int _n;
		
};

std::ostream & operator<<(std::ostream & o, Awesome & obj)
{
	o << obj.getN();
	return o;
}

// int main( void )
// {
// 	int a = 2;
// 	int b = 3;
// 	swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }

int main()
{
	std::cout << "\x1b[33;1m_________________________Test MAX__________________________\x1b[0m" << std::endl;
    int i = max(4, 8);
    std::cout << i << '\n';
 
    double d = max(7.56, 21.434);
    std::cout << d << '\n';
 
    char ch = max('z', 'a');
    std::cout << ch << '\n';

	int ii = max(5, 5);
    std::cout << ii << '\n';
	
	int iih = max(-100, -10);
    std::cout << iih << '\n';
 
    double dd = max(7.77, 7.77);
    std::cout << dd << '\n';
 
    char chch = max('f', 'f');
    std::cout << chch << '\n';
	
	std::string str22 = max("SCHOOL", "school");
    std::cout << str22 << '\n';
	getchar();
 
	std::cout << "\x1b[33;1m_________________________Test MIN__________________________\x1b[0m" << std::endl;
	int i2 = min(4, 8);
    std::cout << i2 << '\n';
 
    double d2 = min(7.56, 21.434);
    std::cout << d2 << '\n';

	int iif = min(-100, -10);
    std::cout << iif << '\n';
 
    char ch2 = min('z', 'a');
    std::cout << ch2 << '\n';

	std::string str2 = min("SCHOOL", "school");
    std::cout << str2 << '\n';
	getchar();

	std::cout << "\x1b[33;1m_________________________Test SWAP__________________________\x1b[0m" << std::endl;
	int a = 97;
	int b = 98;
	std::cout << "BEFORE:          " << a << "          " << b << '\n';
	swap(a, b);
	std::cout << " AFTER:          " << a << "          " << b << '\n' << '\n';

	double a2 = 42.222;
	double b2 = 21.111;
	std::cout << "BEFORE:          " << a2 << "          " << b2 << '\n';
	swap(a2, b2);
	std::cout << " AFTER:          " << a2 << "          " << b2 << '\n' << '\n';

	std::string a3 = "School";
	std::string b3 = "Moscow";
	std::cout << "BEFORE:          " << a3 << "          " << b3 << '\n';
	swap(a3, b3);
	std::cout << " AFTER:          " << a3 << "          " << b3 << '\n' << '\n';
	getchar();

	std::cout << "\x1b[33;1m_________________________Test CLASS__________________________\x1b[0m" << std::endl;
	
	Awesome testvalue(666);
	
	Awesome testMin42(-42);
	Awesome testMin21(-21);
	Awesome test0(0);
	Awesome test100(100);

	std::cout << std::endl;
	std::cout << "\x1b[32;1m_____MIN_____\x1b[0m" << std::endl;
	
	testvalue = min(testMin42, testMin21);
	std::cout << "MIN (-42, -21) " << testvalue << std::endl;

	testvalue = min(test0, testMin42);
	std::cout << "MIN (0, -42) " << testvalue << std::endl;

	testvalue = min(test0, test0);
	std::cout << "MIN (0, 0) " << testvalue << std::endl;

	testvalue = min(test100, testMin42);
	std::cout << "MIN (100, -42) " << testvalue << std::endl;
	std::cout << std::endl;

	std::cout << "\x1b[32;1m_____MAX_____\x1b[0m" << std::endl;
	testvalue = max(testMin42, testMin21);
	std::cout << "MAX (-42, -21) " << testvalue << std::endl;

	testvalue = max(test0, testMin42);
	std::cout << "MAX (0, -42) " << testvalue << std::endl;

	testvalue = max(test0, test0);
	std::cout << "MAX (0, 0) " << testvalue << std::endl;

	testvalue = max(test100, testMin42);
	std::cout << "MAX (100, -42) " << testvalue << std::endl;
	std::cout << std::endl;

	std::cout << "\x1b[32;1m_____SWAP_____\x1b[0m" << std::endl;
	std::cout << "BEFORE:" << '\n';
	std::cout << "          test  -42: " << testMin42.getN() << '\n';
	std::cout << "          test  -21: " << testMin21.getN() << '\n';
	std::cout << "          test    0: " << test0.getN() << '\n';
	std::cout << "          test2 100: " << test100.getN() << '\n' << '\n';

	swap(testMin42, testMin42);
	std::cout << "SWAP (-42, -42)           " << testMin42 << "          " << testMin42 << std::endl;

	swap(testMin42, testMin21);
	std::cout << "SWAP (-42, -21)           " << testMin42 << "          " << testMin21 << std::endl;

	swap(test100, test0);
	std::cout << "SWAP (100, 0)             " << test100 << "            " << test0 << std::endl;
	std::cout << std::endl;
	
	std::cout << "AFTER:" << '\n';
	std::cout << "          test  -42: " << testMin42.getN() << '\n';
	std::cout << "          test  -21: " << testMin21.getN() << '\n';
	std::cout << "          test    0: " << test0.getN() << '\n';
	std::cout << "          test2 100: " << test100.getN() << '\n' << '\n';
	
	std::cout << std::endl;
    return 0;
}
