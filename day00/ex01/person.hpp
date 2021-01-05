/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   person.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:30:34 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/05 20:34:58 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_HPP
# define PERSON_HPP

#include <iostream>
#include <iomanip>

class Person {
private:
	int			id;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
	int check_person	(void);
public:
	Person				(void);
	~Person				(void);
	int add_person		(int id);
	void search			(void);
	void search_id		(void);
};

#endif
