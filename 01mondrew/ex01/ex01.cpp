/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:04:37 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/15 15:05:23 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak(void)
{
	std::string	*panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther;
}

int		main(void)
{
	memoryLeak();

	return (0);
}
