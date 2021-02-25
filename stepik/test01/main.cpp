/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:01:00 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/24 19:19:34 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

// g++ -std=c++11 main.cpp

template<class It>
size_t max_increasing_len(It beginIt, It endIt)
{
    size_t 	res = 1;
	size_t 	max = 1;
	
	auto nx = std::next(beginIt, 0);
	beginIt++;
		
	if (beginIt == endIt)
	{
		return 0;
	}
		for ( ; beginIt != endIt; ++beginIt)
		{
			if (*nx < *beginIt)
			{
				res++;
			}
			else
			{
				if (max < res)
					max = res;
				res = 1;
			}
			nx = std::next(beginIt, 0);
		}
	return (max > res ? max : res);
}

int main()
{
    std::list<int> l0 = {5, 4, 3, 2, 1};
	
    int len0 = max_increasing_len(l0.begin(), l0.end());
    if(len0 == 1)
		std::cout << "0 TRUE" << std::endl;
    else
		std::cout << "0 FALSE. Ожидается 1, получено " << len0 << std::endl;
// 
	std::list<int> l1 = {1, 2, 3, 4};
	
    int len1 = max_increasing_len(l1.begin(), l1.end());
    if(len1 == 4)
		std::cout << "1 TRUE" << std::endl;
    else
		std::cout << "1 FALSE. Ожидается 6, получено " << len1 << std::endl;
//
	std::list<int> const l2 = {7,8,9,4,5,6,1,2,3,4};
    size_t len2 = max_increasing_len(l2.begin(), l2.end()); // 4, соответствует подотрезку 1,2,3,4
    if(len2 == 4) std::cout << "2 TRUE" << std::endl;
    else std::cout << "2 FALSE. Ожидается 4, получено " << len2 << std::endl;
//
    std::list<int> const l3 = {-3,-2,-1,0,0,1,2,3,4,5};
    size_t len3 = max_increasing_len(l3.begin(), l3.end()); // 6, соответствует подотрезку 0,1,2,3,4,5
    if(len3 == 6) std::cout << "3 TRUE" << std::endl;
    else std::cout << "3 FALSE. Ожидается 6, получено " << len3 << std::endl;
//
    std::list<int> const l4 = {1,2,3};
    int len4 = max_increasing_len(l4.begin(), l4.end());
    if(len4 == 3) std::cout << "4 TRUE" << std::endl;
    else std::cout << "4 FALSE. Ожидается 3, получено " << len4 << std::endl;
//
    std::list<int> const l5 = {};
    int len5 = max_increasing_len(l5.begin(), l5.end());
    if(len5 == 0) std::cout << "5 TRUE" << std::endl;
    else std::cout << "5 FALSE. Ожидается 0, получено " << len5 << std::endl;
//
    std::list<int> const l6 = {1, 1, 1, 1, 1};
    int len6 = max_increasing_len(l6.begin(), l6.end());
    if(len6 == 1) std::cout << "6 TRUE" << std::endl;
    else std::cout << "6 FALSE. Ожидается 1, получено " << len6 << std::endl;

	std::list<std::string> const l7 = {"aaaa", "b", "c", "d"};
    int len7 = max_increasing_len(l7.begin(), l7.end());
    if(len7 == 4)
		std::cout << "6 TRUE" << std::endl;
    else
		std::cout << "6 FALSE. Ожидается 1, получено " << len7 << std::endl;

    return 0;
};
