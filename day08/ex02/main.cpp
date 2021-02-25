/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:50:09 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/25 16:58:47 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	system("clear");
	std::cout << "\x1b[33;1m_________________________ EMPTY STACK ________________________________\x1b[0m" << std::endl;
	MutantStack<int> mystack;
	std::cout << "SIZE: " <<mystack.size() << std::endl;
	MutantStack<int>::iterator it = mystack.begin();
	MutantStack<int>::iterator ite = mystack.end();
	int i = 0;
	while (it != ite)
	{
		std::cout <<"stack["<<i<<"]: " << *it << std::endl;
		++it;
		i++;
	}
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ PUSH ________________________________\x1b[0m" << std::endl;
	mystack.push(111);
	mystack.push(222);
	mystack.push(333);
	mystack.push(444);
	mystack.push(555);
	std::cout << "SIZE: " <<mystack.size() << std::endl;
	it = mystack.begin();
	ite = mystack.end();
	i = 0;
	while (it != ite)
	{
		std::cout <<"stack["<<i<<"]: " << *it << std::endl;
		++it;
		i++;
	}
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ POP ________________________________\x1b[0m" << std::endl;
	mystack.pop();
	mystack.pop();
	std::cout << "SIZE: " <<mystack.size() << std::endl;
	it = mystack.begin();
	ite = mystack.end();
	i = 0;
	while (it != ite)
	{
		std::cout <<"stack["<<i<<"]: " << *it << std::endl;
		++it;
		i++;
	}
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ CHANGE POINTER ________________________________\x1b[0m" << std::endl;
	it = mystack.begin();
	ite = mystack.end();
	i = 0;
	it++;
	i++;
	ite--;
	while (it != ite)
	{
		std::cout <<"stack["<<i<<"]: " << *it << std::endl;
		++it;
		i++;
	}
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ CHANGE POINTER 2 ________________________________\x1b[0m" << std::endl;
	mystack.push(666);
	mystack.push(777);
	it = mystack.begin();
	ite = mystack.end();
	i = 0;
	it++;
	i++;
	ite--;
	while (it != ite)
	{
		std::cout <<"stack["<<i<<"]: " << *it << std::endl;
		++it;
		i++;
	}
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ SEE TOP ________________________________\x1b[0m" << std::endl;
	std::cout << mystack.top() <<std::endl;
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ SWAP ________________________________\x1b[0m" << std::endl;
	MutantStack<int> tmp;
	tmp.push(0);
	tmp.push(1);
	tmp.push(2);
	tmp.push(3);
	tmp.push(4);
	tmp.push(5);
	mystack.swap(tmp);
	it = mystack.begin();
	ite = mystack.end();
	MutantStack<int>::iterator t = tmp.begin();
	MutantStack<int>::iterator tm = tmp.end();
	i = 0;
	while (it != ite)
	{
		std::cout <<"mystack["<<i<<"]: " << *it << std::endl;
		++it;
		i++;
	}
	i = 0;
	while (t != tm)
	{
		std::cout <<"tmp["<<i<<"]: " << *t << std::endl;
		++t;
		i++;
	}
	
}