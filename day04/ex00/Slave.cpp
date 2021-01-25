






#include "Slave.hpp"

Slave::Slave(void) : Victim ("Victim") {} 

Slave::Slave(std::string name) : Victim( name )
{
	_name = name;
	std::cout << "A slave does not choose his master" << std::endl;
}

Slave::Slave( Slave const & ClassToCopy ) : Victim( ClassToCopy )
{
	*this = ClassToCopy;
	return ;
}

Slave::~Slave()
{
	std::cout << "It's time to rest" << std::endl;
}

/*
** polymorphed
*/
void				Slave::getPolymorphed() const
{
	std::cout << _name << " has been turned into a freedom-loving wolf!" << std::endl;
}

/*
**	overload
*/

Slave			&Slave::operator=(Slave const &src)
{
	this->_name = src.getName();
	return *this;
}
