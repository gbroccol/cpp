/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:46:39 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/05 13:34:06 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
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
	fout << " /\\/\\._^//_/__/\\/,^_//__\\/.  ^_//__/_" << std::endl;
	fout << "                         (c) gbroccol";
	fout.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
