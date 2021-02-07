#ifndef TYPES_HPP
# define TYPES_HPP

# include <iostream>
# include <cmath>
# include <string>
# include <limits>
#include<iomanip>

class Types
{

	public:

		Types();
		Types(std::string value);
		Types( Types const & src );
		~Types();
		void converToChar(void);
		void converToInt(void);
		void converToFloat(int sum);
		int countValue(std::string value);
		Types &		operator=( Types const & rhs );
		class error: public  std::exception
		{
			const char *what() const throw();
		};
	private:
		double _value;
};


#endif /* *********************************************************** TYPES_H */