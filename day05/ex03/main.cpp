
// check leaks

// If it’s using a worse method, like if/elseif/elseif/else branchings,
// or some other ugly stuff like this, it will not be accepted during the evaluation.


#include "Intern.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "\x1b[33;1m_________________________Shrubbery Creation Form__________________________\x1b[0m" << std::endl;

	try
	{
		Intern intern;
		Form * form;
		
		form = intern.makeForm("shrubbery creation", "vogsphere");
		
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Robotomy Request Form__________________________\x1b[0m" << std::endl;
	try
	{
		Intern intern;
		Form * form;
		
		form = intern.makeForm("robotomy request", "vogsphere");
		
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Presidential Pardon Form__________________________\x1b[0m" << std::endl;
	try
	{
		Intern intern;
		Form * form;
		
		form = intern.makeForm("presidential pardon", "vogsphere");
		
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	getchar();

	std::cout << "\x1b[33;1m_________________________Unknown Form__________________________\x1b[0m" << std::endl;
	try
	{
		Intern intern;
		Form * form;
		
		form = intern.makeForm("unknown form", "vogsphere");
		
		delete form;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
