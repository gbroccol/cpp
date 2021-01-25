



#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <iomanip>

class Sorcerer
{
private:
	
	std::string			_name;
	std::string			_title;

	Sorcerer(void);

public:
	
	Sorcerer(std::string name, std::string title);
	~Sorcerer();

	std::string			getName() const;
	std::string			getTitle() const;

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & src);



Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

/* get */
std::string			Sorcerer::getName() const { return (this->_name); }
std::string			Sorcerer::getTitle() const { return (this->_title); }

std::ostream & operator<<(std::ostream & o, Sorcerer const & src)
{
	o << "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies!" << std::endl;//src.toFloat();
	return o;
}

#endif
