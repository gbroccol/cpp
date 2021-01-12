/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 20:12:27 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/12 20:12:30 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {

private:
	std::string color;
	std::string breed;

public:
	Pony				(std::string color, std::string breed);
	~Pony				(void);
	std::string			getColor(void);
	std::string			getBreed(void);
};

#endif
