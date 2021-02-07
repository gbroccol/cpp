/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 19:36:43 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/07 17:48:46 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct			data 
{
	std::string s1;
	int			n;
	std::string s2;
};

char			*random_arr(char *a)
{
	int i = 0;
	int j = -1;
	int *intVal;
	char *tmp;
	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
	srand (time(NULL));
	std::cout << "\x1b[36mserialization\x1b[0m" <<std::endl;
	
	a = new char[sizeof(char) * 18 + sizeof(int)];
	intVal = new int(rand());
	std::cout << "\x1b[4mS1: \x1b[0m";
	while(++j < 8)
	{
		a[i] = arr[rand() % 52];
		std::cout << a[i++];
	}
	std::cout << std::endl;
	j = 0;
	tmp = reinterpret_cast<char*>(intVal);
	std::cout << "\x1b[4mN: \x1b[0m";
	while((unsigned long)j < sizeof(int))
		a[i++] = tmp[j++];
	std::cout << *intVal <<std::endl;
	i++;
	j = -1;
	std::cout << "\x1b[4mS2: \x1b[0m";
	while(++j < 8)
	{
		a[i] = arr[rand() % 52];
		std::cout << a[i++];
	}
	std::cout << std::endl;
	delete intVal;
	return (a);
}	

void 			*serialize(void)
{
	char *a = NULL;
	a = random_arr(a);
	return (reinterpret_cast<void*>(a));
}

data 			*deserialize(void *row)
{
	
	data *a = new data;
	int i = 0;
	int j = 0;
	char *tmp_int = new char[4];
	int *tmp;
	char *tmp_str = new char[9];
	char *tmp_str2 = new char[9];
	char*str; 
	str = reinterpret_cast<char*> (row);
	while(j < 8)
	{
		tmp_str[i] = str[i];
		i++;
		j++;
	}
	tmp_str[i] = '\0';
	a->s1 = tmp_str;
	j = 0;
	while((unsigned long)j < sizeof(int))
		tmp_int[j++] = str[i++];
	tmp_int[j]= '\0';
	tmp = reinterpret_cast<int*>(tmp_int);
	a->n = *tmp;
	j = 0;
	while(j <= 8)
		tmp_str2[j++] = str[i++];
	tmp_str2[i] = '\0';
	a->s2 = tmp_str2;
	delete[]tmp_str;
	delete[]tmp_int;
	delete[]tmp_str2;
	delete[]str;
	return (a);
}

int 			main()
{
	void *row;
	row =  serialize();

	data* data;
	data = deserialize(row);
	std::cout	<< "\x1b[36mdeserialize\x1b[0m" <<std::endl;
	std::cout	<<"\x1b[4mS1: \x1b[0m" << data->s1 << std::endl \
				<<"\x1b[4mN: \x1b[0m" << data->n << std::endl\
				<< "\x1b[4mS2: \x1b[0m" << data->s2 << std::endl;
	return (0);
}