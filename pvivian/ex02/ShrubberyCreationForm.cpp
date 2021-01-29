/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvivian <pvivian@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 21:50:23 by pvivian           #+#    #+#             */
/*   Updated: 2021/01/12 14:37:59 by pvivian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "Filename_shrubbery";
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target.append("_shrubbery");
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & person) : AForm(person)
{
	this->_target = person._target;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream file(this->_target.c_str());

	if (!file.is_open() || !file.good())
		throw file.exceptions();
	AForm::isExecutionAllowed(executor);
	
	file << "" << std::endl;
	file << "				*   *		*			*" << std::endl;
	file << "		*	*			*		 *   *		*" << std::endl;
	file << "				*					*			  *" << std::endl;
	file << "	*				*								*" << std::endl;
	file << "						*		    ,			  '		*" << std::endl;
	file << "*    *                            ,.			*	 	 *" << std::endl;
	file << "		*				*	    '&			*			 " << std::endl;
	file << "*			*				   ,J						*" << std::endl;
	file << "					'		  '$						   *" << std::endl;
	file << "	*		  ;,	          b'      .,**~;				*" << std::endl;
	file << "			    .**,          $""    .*;^'		*			" << std::endl;
	file << "*		*		 .$t*       %'  ,**''				*	  *" << std::endl;
	file << "					:%a%`  && .@@..						" << std::endl;
	file << "*					 *&&%>#@@&%'					 *	" << std::endl;
	file << "	*				  .9$#^)@#@&^				  *" << std::endl;
	file << "		*				`%5#K+}''				*" << std::endl;
	file << "			*	*	*	  *'o8'.	*  *	*" << std::endl;
	file << "						  ';&)'" << std::endl;
	file << "						   ;%'" << std::endl;
	file << "						  ..:$*" << std::endl;
	file << "			     \\/\\/|/ ...;%@. \\/\\|/\\//\\/" << std::endl;
	file << "											(c) pvivian" << std::endl;

	file.close();
	return;
}





// 				*   *		*			*
// 		*	*			*		 *   *		*
// 				*					*			  *
// 	*				*								*
// 						*		    ,			  '		*
// *    *                              ,.			*	 	 *
// 		*				*	    '&			*			 
// *			*				   ,J						*
// 					'		  "$						  *
// 	*		  ;,	          b'      .,**~;				*
// 			    .**,          $"    .*;^'		*			
// *		*		 .$t*       %'  ,**''				*	  *
// 					:%a%`  && .@@..						
// *					 *&&%>#@@"""'					*	
// 	*				.(9$#^)@#@&^				*
// 		*				`%5#K+}''				*
// 			*	*	*	  *'o8'.	*  *	*
// 						  ';&)'
// 						  ..:$*
// 				\/\\/|/ ...;%@. \/\|/\\//\/
// 											(c) pvivian
