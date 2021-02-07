#include "Types.hpp"

Types::Types(std::string value)
{
	if(!isdigit(value[0]) && value.length() == 1)
		this->_value = static_cast<double>(value[0]);
	else
		this->_value = std::stod(value);
	int sum = countValue(value);	
	converToChar();
	converToInt();
	converToFloat(sum);
	std::cout << "Double : " <<std::setprecision(sum) << this->_value <<std::endl;
	return ;
}

int	Types::countValue(std::string value)
{
	int i = 0;
	int sum = 0;
	while(value[i])
	{
		if(value[i] == '.')
		{
			i++;
			while(value[i] && isdigit(value[i]))
			{
				sum++;
				i++;
			}
			return (sum);
		}
		i++;
	}
	return (sum + 1);
}

Types::Types()
{
	return ;
}

Types::Types( const Types & src )
{
	this->_value = src._value;
}

Types::~Types()
{
	return ;
}

Types &				Types::operator=( Types const & rhs )
{
	if ( this != &rhs )
	{
		this->_value = rhs._value;
	}
	return *this;
}

void Types::converToChar(void)
{
	char res;
	if(isnan(this->_value) || isinf(this->_value) || this->_value > 255 || this->_value < 0)
		std::cout << "Char: impossible" <<std::endl;
	else
	{
		if(this->_value < 32)
			std::cout << "Char :  Non displayable" <<std::endl;
		else
		{
			res = static_cast<char>(this->_value);
			std::cout << "Char : '" << res << "'"<<std::endl;
		}
	}
}
void Types::converToInt(void)
{
	int res = 0;
	if(this->_value > INT_MAX || this->_value < INT_MIN || isnan(this->_value) || isinf(this->_value))
		std::cout << "Int : impossible" <<std::endl;
	else
	{
		res = static_cast<int>(this->_value);
		std::cout << "Int : " << res <<std::endl;
	}
}
void Types::converToFloat(int sum)
{
	float res = 0;
	res = static_cast<float>(this->_value);
	std::cout << "Float : "<< std::fixed<<std::setprecision(sum)<< res << "f" << std::endl;
}

const char *Types::error::what() const throw()
{
	return ("Error");
};

