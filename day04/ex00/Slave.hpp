






#ifndef SLAVE_HPP
#define SLAVE_HPP

#include <iostream>
#include <iomanip>
#include "Victim.hpp"

class Slave : public Victim
{
private:

	Slave(void);												// CONONICAL FORM

public:
	
	Slave( std::string name);	
	Slave( Slave const & ClassToCopy );						// CONONICAL FORM
	virtual ~Slave();										// CONONICAL FORM

	virtual void			getPolymorphed() const;

	/* overload */
	Slave					&operator=(Slave const & src);		// CONONICAL FORM

};

#endif
