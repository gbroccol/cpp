/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:14:36 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/07 18:54:38 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Сериализация (в программировании) — процесс перевода какой-либо структуры данных в последовательность байтов.
// Обратной к операции сериализации является операция десериализации (структуризации) —
						// восстановление начального состояния структуры данных из битовой последовательности.

// The serialized data is the concatenation of a random array of 8 alphanumerical characters,
// a random integer and a second random array of 8 alphanumerical characters.
// Feel free to use anything you like to generate the random values.

// reinterpret_cast

#include <iostream>

struct				Data
{
	std::string		s1;
	int				n;
	std::string		s2;
};

void	serializeStr(char *data, int i) // change
{
	std::string smb = "jfnvsjnfvjkanannanannfvnadjfvdfiodmfnaofnbaoifnboiadfb";
	
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

void * serialize(void) //This function will return the address on the heap of a sequence of bytes that represent a piece of serialized data. 
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

char *		deserializeStr(char *str, int i) // change
{
	char *result= new char[8];
	
	std::cout << "Data " << i << ": ";
	for (int i = 0; i < 8; i++)
		result[i] = str[i];
	std::cout << result << std::endl;
	return (result);
}

int	*deserializeNmb(char *str, int i)
{
	int		*nmb = new int;
	char	*tmp = new char [4];
	
	for (unsigned long int i = 0; i < sizeof(int); i++)
		tmp[i] = str[i];
	nmb = reinterpret_cast <int *> (tmp);
	// delete nmb;
	std::cout << "Data " << i << ": " << *nmb << std::endl;
	return (nmb);
	
}

Data * deserialize(void * data) // This function will deserialize the raw data to a Data structure
{
	Data *deserializeData = new Data;
	int		position = 0;
	char *str = reinterpret_cast <char *> (data);

	std::cout << "\x1b[34m" << std::endl;
	deserializeData->s1 = deserializeStr(&str[position], 0);
	position += 8;
	deserializeData->n = (*deserializeNmb(&str[position], 1));


	position += 4;
	deserializeData->s2 = deserializeStr(&str[position], 2);
	std::cout << "\x1b[0m" << std::endl;
	return (deserializeData);
}

int main()
{
	void *serializeData;
	serializeData = serialize();
	
	Data *deserializeData;
	deserializeData = deserialize(serializeData);

    return (0);
}