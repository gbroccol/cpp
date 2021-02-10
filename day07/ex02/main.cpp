/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 13:02:08 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/10 15:50:15 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{ 
	try
	{
 		std::cout << "\x1b[33;1m_________________________ Test INT __________________________\x1b[0m" << std::endl;
		Array <int> a2(3);
		std::cout << a2.size() << std::endl << std::endl;
		for(unsigned int i = 0; i < a2.size(); i++)
		{
			std::cout << a2[i] << std::endl;
		}
		getchar();
		
		std::cout << "\x1b[33;1m_________________________ Test STRING __________________________\x1b[0m" << std::endl;
		Array <std::string> string_arr_test(4);
		std::cout << string_arr_test.size() << std::endl<< std::endl;
		std::string tmp_arr_test[] = {"hi", "hello", "bie", "goodbie"};
		for(unsigned int i = 0; i < string_arr_test.size(); i++)
		{
			string_arr_test[i] = tmp_arr_test[i];
			std::cout << string_arr_test[i] << std::endl;
		}
		getchar();
		
		std::cout << "\x1b[33;1m_________________________ Test DOUBLE __________________________\x1b[0m" << std::endl;
		Array <double> double_arr(4);
		std::cout << double_arr.size() << std::endl<< std::endl;
		double tmp_arr2[] = {4.54, 46.1, 47.6846, 48.16};
		for(unsigned int i = 0; i < double_arr.size(); i++)
		{
			double_arr[i] = tmp_arr2[i];
			std::cout << double_arr[i] << std::endl;
		}
		getchar();
		
		std::cout << "\x1b[33;1m_________________________ Test FLOAT __________________________\x1b[0m" << std::endl;
		Array <float> float_arr(4);
		std::cout << float_arr.size() << std::endl<< std::endl;
		double tmp_arr3[] = {49.985, 50.9, 60.5, 61.6148};
		for(unsigned int i = 0; i < float_arr.size(); i++)
		{
			float_arr[i] = tmp_arr3[i];
			std::cout << float_arr[i] << std::endl;
		}
		getchar();
		
		std::cout << "\x1b[33;1m_________________________ Test CHAR __________________________\x1b[0m" << std::endl;
		Array <char> char_arr(4);
		std::cout << char_arr.size() << std::endl<< std::endl;
		char tmp_arr5[] = {'a', 'b', 'c', 'd'};
		for(unsigned int i = 0; i < char_arr.size(); i++)
		{
			char_arr[i] = tmp_arr5[i];
			std::cout << char_arr[i] << std::endl;
		}
		getchar();
		
		std::cout << "\x1b[33;1m_________________________ Test EMPTY ARR __________________________\x1b[0m" << std::endl;
		Array <char> empty_arr;
		std::cout << empty_arr.size() << std::endl<< std::endl;
		for(unsigned int i = 0; i < empty_arr.size(); i++)
		{
			std::cout << empty_arr[i] << std::endl;
		}
		getchar();

		std::cout << "\x1b[33;1m_________________________ Test ARR 0 __________________________\x1b[0m" << std::endl;
		Array <char> arr_n(0);
		std::cout << arr_n.size() << std::endl<< std::endl;
		for(unsigned int i = 0; i < arr_n.size(); i++)
		{
			std::cout << arr_n[i] << std::endl;
		}

		// std::cout << "\x1b[33;1m_________________________ Test INCORRECT ARR __________________________\x1b[0m" << std::endl;
		// Array <char> incorrect_arr(-1);
		// std::cout << incorrect_arr.size() << std::endl<< std::endl;
		// for(unsigned int i = 0; i < incorrect_arr.size() + 1; i++)
		// {
		// 	std::cout << incorrect_arr[i] << std::endl;
		// }
	
		// std::cout << "\x1b[33;1m_________________________ Test INCORRECT EMPTY ARR __________________________\x1b[0m" << std::endl;
		// Array <char> incorrect_empty_arr;
		// std::cout << incorrect_empty_arr.size() << std::endl<< std::endl;
		// for(unsigned int i = 0; i < incorrect_empty_arr.size() + 1; i++)
		// {
		// 	std::cout << incorrect_empty_arr[i] << std::endl;
		// }

		// std::cout << "\x1b[33;1m_________________________ Test INCORRECT FULL CHAR __________________________\x1b[0m" << std::endl;
		// Array <char> incorrect_char_arr(4);
		// std::cout << incorrect_char_arr.size() << std::endl<< std::endl;
		// char tmp_arr7[] = {'a', 'b', 'c', 'd'};
		// for(unsigned int i = 0; i < incorrect_char_arr.size() + 3; i++)
		// {
		// 	incorrect_char_arr[i] = tmp_arr7[i];
		// 	std::cout << incorrect_char_arr[i] << std::endl;
		// }

		std::cout << "\x1b[33;1m_________________________ Test COPY CONSTRUCTOR __________________________\x1b[0m" << std::endl;
		
		std::cout << "\x1b[32m" << std::endl;
		Array <std::string> string_arr(4);
		std::cout << string_arr.size() << std::endl<< std::endl;
		std::string tmp_arr[] = {"hi", "hello", "bie", "goodbie"};
		for(unsigned int i = 0; i < string_arr.size(); i++)
		{
			string_arr[i] = tmp_arr[i];
			std::cout << string_arr[i] << std::endl;
		}
		std::cout << "\x1b[0m" << std::endl;

		std::cout << "\x1b[36m" << std::endl;
		Array <std::string> string_arr_copy(string_arr);
		std::cout << string_arr_copy.size() << std::endl<< std::endl;
		for(unsigned int i = 0; i < string_arr_copy.size(); i++)
			std::cout << string_arr_copy[i] << std::endl;
		getchar();
		
		std::string changeVal[] = {"wow", "super", "magic", "really"};
		for(unsigned int i = 0; i < string_arr_copy.size(); i++)
		{
			string_arr_copy[i] = changeVal[i];
			std::cout << string_arr_copy[i] << std::endl;
		}
		std::cout << "\x1b[0m";
		getchar();

		std::cout << "\x1b[32m" << std::endl;
		for(unsigned int i = 0; i < string_arr.size(); i++)
			std::cout << string_arr[i] << std::endl;
		std::cout << "\x1b[0m" << std::endl;
		getchar();

		std::cout << "\x1b[33;1m_________________________ Test OPERATOR = __________________________\x1b[0m" << std::endl;
		string_arr_copy = string_arr;
		std::cout << "\x1b[32m" << std::endl;
		for(unsigned int i = 0; i < string_arr.size(); i++)
			std::cout << string_arr[i] << std::endl;
		std::cout << "\x1b[0m" << std::endl;

		std::cout << "\x1b[36m" << std::endl;
		for(unsigned int i = 0; i < string_arr_copy.size(); i++)
			std::cout << string_arr_copy[i] << std::endl;
		std::cout << "\x1b[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}