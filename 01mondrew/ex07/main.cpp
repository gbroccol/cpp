/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mondrew <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:48:54 by mondrew           #+#    #+#             */
/*   Updated: 2020/12/16 18:23:42 by mondrew          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int			ft_replace(std::string filename, std::string s1, std::string s2)
{
	std::string		replace = filename + ".replace";
	std::ifstream	ifs(filename.c_str());
	std::ofstream	ofs(replace.c_str());
	std::string		newstr;
	std::string		line;
	std::size_t		found = 0;
	std::size_t		start = 0;

	if (!ifs.is_open())
	{
		std::cout << "Error: " << filename << ": no such file" << std::endl;
		return (-1);
	}
	while (std::getline(ifs, line))
	{
		found = 0;
		newstr = "";
		while (1)
		{
			start = found;
			if ((found = line.find(s1, found)) == std::string::npos)
				break ;
			newstr += line.substr(start, found - start);
			newstr += s2;
			found += s1.length();
		}
		newstr += line.substr(start);
		ofs << newstr << std::endl;
	}
	if (ifs.bad())
	{
		std::cout << "Error: " << filename << ": can't read the file" << std::endl;
		if (!ofs.bad())
			ofs.close();
		return (-1);
	}
	if (ofs.bad())
	{
		std::cout << "Error: " << filename << ": can't write to the file" << std::endl;
		ifs.close();
		return (-1);
	}
	ifs.close();
	ofs.close();
	return (0);
}

int			ft_check_file(char *filename)
{
	std::ifstream	ifs(filename);

	if (!ifs.is_open())
	{
		std::cout << "Error: " << filename << ": no such file" << std::endl;
		return (-1);
	}
	ifs.close();
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	if (ft_check_file(argv[1]) == -1)
		return (1);
	if (ft_replace(argv[1], argv[2], argv[3]) == -1)
		return (1);
	return (0);
}
