/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:53:40 by gbroccol          #+#    #+#             */
/*   Updated: 2021/01/05 20:53:44 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
// #include <sstream>

#define WRONG_NMB_ARG	1
#define NO_SUCH_FILE	2
#define EMPTY_LINE		3

int		ft_error(int error_type)
{
	if (error_type == WRONG_NMB_ARG)
		std::cout << "Error" << std::endl << "Wrong number of arguments" << std::endl;
	if (error_type == NO_SUCH_FILE)
		std::cout << "Error" << std::endl << "There is no such file" << std::endl;
	if (error_type == EMPTY_LINE)
		std::cout << "Error" << std::endl << "Strings for replacing can not be empty" << std::endl;
	return (1);
}

// aaaaaaa
void	ft_replace(std::string s1, std::string s2, std::ifstream *fin, std::ofstream *fout)
{
	std::string str;
	int pos;

	while (!fin->eof())
	{
		pos = 0;
		std::getline(*fin, str);
		while (pos != std::string::npos)
		{
			pos = str.find(s1);
			if (pos != std::string::npos)
				str.replace(pos, s1.length(), s2);
		}
		if (!fin->eof())
			*fout << str << std::endl;
	}
}

int main (int argc, char **argv)
{
	if (argc != 4)
		return (ft_error(WRONG_NMB_ARG));
	else
	{
		std::string		old_file = argv[1];
		std::string		new_file = old_file + ".replace";
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];


		if (s1.length() == 0 || s2.length() == 0)
			return (ft_error(EMPTY_LINE));
		std::ifstream fin(old_file);
		// if (!fin.good())
			// return (ft_error(NO_SUCH_FILE)); // ???
		std::ofstream fout(new_file);
		if (!fout.good())
		{
			fin.close();
			return (ft_error(NO_SUCH_FILE)); // ???
		}
		ft_replace(s1, s2, &fin, &fout);
		fout.close();
		fin.close();
	}
	return (0);
}

// fstream
// ifstream - чтение из файла
// ofstream - запись в файл
