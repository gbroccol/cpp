/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 00:58:54 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/14 01:02:30 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main(void)
{
	std::string		message = "HI THIS IS BRAIN";
	std::string		*ptrToMsg = &message;
	std::string		&refToMsg = message;

	std::cout << *ptrToMsg << std::endl;
	std::cout << refToMsg << std::endl;

	return (0);
}
