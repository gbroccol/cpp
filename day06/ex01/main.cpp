/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:14:36 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/09 14:31:15 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct				Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void	serializeStr(char *data, int i)
{
	std::string smb = "!\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	
	std::cout << "Data " << i << ": ";
	for (int i = 0; i < 8; i++)
	{
		data[i] = smb[rand() % smb.length()];
		std::cout << data[i];
	}
	std::cout << std::endl;
}

void	serializeNmb(char *data, int i)
{
	int		*nmb = new int(rand());
	char	*str = reinterpret_cast <char *> (nmb);
	
	std::cout << "Data " << i << ": " << *nmb << std::endl;
	for (unsigned long int i = 0; i < sizeof(int); i++)
		data[i] = str[i];
	delete nmb;
}

void * serialize(void)
{
	int		position = 0;
	char *data = new char[sizeof(char) * 8 * 2 + sizeof(int)];
	
	std::cout << "\x1b[32m" << std::endl;
	
	srand(time(NULL));

	serializeStr(&data[position], 0);
	position += 8;
	serializeNmb(&data[position], 1);
	position += 4;
	serializeStr(&data[position], 2);

	std::cout << "\x1b[0m" << std::endl;

	return (reinterpret_cast <void *> (data));
}

std::string		deserializeStr(char *str)
{
	char *result= new char[8];

	for (int i = 0; i < 8; i++)
		result[i] = str[i];
	std::string ret(result);

	delete [] result;
	
	return (ret);
}

int	deserializeNmb(char *str)
{
	int		*nmb;
	char	*tmp = new char [4];
	int		ret;
	
	for (unsigned long int i = 0; i < sizeof(int); i++)
		tmp[i] = str[i];
	nmb = reinterpret_cast <int *> (tmp);
	ret = *nmb;
	delete nmb;
	return (ret);
}

Data * deserialize(void * data)
{
	Data	*deserializeData = new Data;
	int		position = 0;
	char	*str = reinterpret_cast <char *> (data);

	std::cout << "\x1b[34m" << std::endl;
	deserializeData->s1 = deserializeStr(&str[position]);
	position += 8;

	deserializeData->n = deserializeNmb(&str[position]);
	position += 4;

	deserializeData->s2 = deserializeStr(&str[position]);
	position += 8;
	std::cout << "\x1b[0m" << std::endl;

	return (deserializeData);
}

int main()
{
	void *serializeData;
	serializeData = serialize();

	Data *deserializeData;
	deserializeData = deserialize(serializeData);

	std::cout << "Data 0: " << deserializeData->s1 << std::endl;
	std::cout << "Data 1: " << deserializeData->n << std::endl;
	std::cout << "Data 2: " << deserializeData->s2 << std::endl;
	delete deserializeData;
    return (0);
}
