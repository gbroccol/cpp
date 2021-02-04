/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:46:39 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/04 20:03:27 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->_Target = target.append("_shrubbery");
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
	if (this == nullptr)
		throw NullException();
	_Target = src._Target;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		_Target = rhs._Target;
	}
	return *this;
}

// std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

void					ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	accessExecute(executor);
	// std::cout << executor.getName() << std::endl;
	// std::cout << "Target is " << _Target << std::endl;
		// std::cout << executor.getName() << " is executing the " << this->getName() << std::endl;
	// }
	
	// Action: Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.

	std::ofstream fout(_Target);

	if (!fout.is_open() || !fout.good())
		throw fout.exceptions();

	fout << "" << std::endl;
	fout << "				,@@@@@@@," << std::endl;
	fout << "	,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	fout << "	,&%%&%&&%,@@@@@/@@@@@@,8888*88/8o" << std::endl;
	fout << ",%&*%&&%&&%,@@@*@@@/@@@88*88888/88'" << std::endl;
	fout << "%&&%&%&/%&&%@@*@@/ /@@@88888*88888'" << std::endl;
	fout << "%&&%/ %&%%&&@@* V /@@' `88*8 `/88'" << std::endl;
	fout << "`&%* ` /%&'    |.|        * '|8'" << std::endl;
	fout << "	|o|        | |         | |" << std::endl;
	fout << "	|.|        | |         | |" << std::endl;
	fout << " /\\/\\._^//_/__/\\/,^_//__\\/.  ^_//__/_ (c) gbroccol";
	fout.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */