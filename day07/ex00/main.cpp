#include <iostream>
#include <cstdio>
 
template <typename T>
const T& max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}

template <typename T>
const T& min(const T& a, const T& b)
{
    return (a < b) ? a : b;
}

template <typename T>
void swap(T& a, T& b)
{
	T tmp = a;

	a = b;
	b = tmp;
}

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}

// int main()
// {
// 	std::cout << "\x1b[33;1m_________________________Test MAX__________________________\x1b[0m" << std::endl;
//     int i = max(4, 8);
//     std::cout << i << '\n';
 
//     double d = max(7.56, 21.434);
//     std::cout << d << '\n';
 
//     char ch = max('z', 'a');
//     std::cout << ch << '\n';

// 	int ii = max(5, 5);
//     std::cout << ii << '\n';
 
//     double dd = max(7.77, 7.77);
//     std::cout << dd << '\n';
 
//     char chch = max('f', 'f');
//     std::cout << chch << '\n';
// 	getchar();
 
// 	std::cout << "\x1b[33;1m_________________________Test MIN__________________________\x1b[0m" << std::endl;
// 	int i2 = min(4, 8);
//     std::cout << i2 << '\n';
 
//     double d2 = min(7.56, 21.434);
//     std::cout << d2 << '\n';
 
//     char ch2 = min('z', 'a');
//     std::cout << ch2 << '\n';

// 	std::string str2 = min("SCHOOL", "school");
//     std::cout << str2 << '\n';
// 	getchar();

// 	std::cout << "\x1b[33;1m_________________________Test SWAP__________________________\x1b[0m" << std::endl;
// 	int a = 97;
// 	int b = 98;
// 	std::cout << "BEFORE:          " << a << "          " << b << '\n';
// 	swap(a, b);
// 	std::cout << " AFTER:          " << a << "          " << b << '\n' << '\n';

// 	double a2 = 42.222;
// 	double b2 = 21.111;
// 	std::cout << "BEFORE:          " << a2 << "          " << b2 << '\n';
// 	swap(a2, b2);
// 	std::cout << " AFTER:          " << a2 << "          " << b2 << '\n' << '\n';

// 	std::string a3 = "School";
// 	std::string b3 = "Moscow";
// 	std::cout << "BEFORE:          " << a3 << "          " << b3 << '\n';
// 	swap(a3, b3);
// 	std::cout << " AFTER:          " << a3 << "          " << b3 << '\n' << '\n';

// 	// char a4[] = "School";
// 	// char b4[] = "Moscow";
// 	// std::cout << "BEFORE:          " << a4 << "          " << b4 << '\n';
// 	// swap(a4, b4);
// 	// std::cout << " AFTER:          " << a4 << "          " << b4 << '\n' << '\n';
//     return 0;
// }
