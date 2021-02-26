/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbroccol <gbroccol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:50:09 by gbroccol          #+#    #+#             */
/*   Updated: 2021/02/26 12:48:18 by gbroccol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ EMPTY STACK ________________________________\x1b[0m" << std::endl;
	
	MutantStack <int> mystack;
	std::cout << "SIZE: " <<mystack.size() << std::endl;

	if (mystack.empty() == true)
		std::cout << "I AM EMPTY" << std::endl;
	
	MutantStack<int>::iterator it = mystack.begin();
	MutantStack<int>::iterator ite = mystack.end();
	
	for (int i = 0; it != ite; ++it)
	{
		std::cout << "stack[" << i << "]: " << *it << std::endl;
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
	
	for (int i = 0; it != ite; ++it)
	{
		std::cout << "stack[" << i << "]: " << *it << std::endl;
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
	
	for (int i = 0; it != ite; ++it)
	{
		std::cout << "stack[" << i << "]: " << *it << std::endl;
		i++;
	}
	
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ CHANGE POINTER ________________________________\x1b[0m" << std::endl;
	
	it = mystack.begin();
	ite = mystack.end();
	
	it++;
	ite--;
	
	for (int i = 1; it != ite; ++it)
	{
		std::cout << "stack[" << i << "]: " << *it << std::endl;
		i++;
	}
	
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ CHANGE POINTER 2 ________________________________\x1b[0m" << std::endl;
	
	mystack.push(666);
	mystack.push(777);
	
	it = mystack.begin();
	ite = mystack.end();
	
	it++;
	ite--;

	for (int i = 1; it != ite; ++it)
	{
		std::cout << "stack[" << i << "]: " << *it << std::endl;
		i++;
	}
	
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ SEE TOP ________________________________\x1b[0m" << std::endl;
	std::cout << mystack.top() <<std::endl;
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ SWAP ________________________________\x1b[0m" << std::endl;
	
	MutantStack <int> tmp;
	
	tmp.push(0);
	tmp.push(1);
	tmp.push(2);
	tmp.push(3);
	tmp.push(4);
	tmp.push(5);
	
	mystack.swap(tmp);
	
	it = mystack.begin();
	ite = mystack.end();
	for (int i = 0; it != ite; ++it)
	{
		std::cout << "stack[" << i << "]: " << *it << std::endl;
		i++;
	}
	std::cout << std::endl;
	
	MutantStack<int>::iterator t = tmp.begin();
	MutantStack<int>::iterator tm = tmp.end();
	for (int i = 0; t != tm; ++t)
	{
		std::cout << "  tmp[" << i << "]: " << *t << std::endl;
		i++;
	}
	
	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ OPERATOR = ________________________________\x1b[0m" << std::endl;
	
	tmp = mystack;
	
	it = mystack.begin();
	ite = mystack.end();
	for (int i = 0; it != ite; ++it)
	{
		std::cout << "stack[" << i << "]: " << *it << std::endl;
		i++;
	}
	std::cout << std::endl;
	
	t = tmp.begin();
	tm = tmp.end();
	for (int i = 0; t != tm; ++t)
	{
		std::cout << "  tmp[" << i << "]: " << *t << std::endl;
		i++;
	}

	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ CONSTRUCTOR COPY ________________________________\x1b[0m" << std::endl;
	
	MutantStack <int> copy(mystack);
	
	MutantStack<int>::iterator copyt = copy.begin();
	MutantStack<int>::iterator copytm = copy.end();
	
	for (int i = 0; copyt != copytm; ++copyt)
	{
		std::cout << "copy[" << i << "]: " << *copyt << std::endl;
		i++;
	}

	getchar();
	system("clear");
	
	std::cout << "\x1b[33;1m_________________________ List ________________________________\x1b[0m" << std::endl;
	
	std::list <int> List;

	List.push_back(0);
	List.push_back(21);
	List.push_back(42);
	
	std::list<int>::iterator Listt = List.begin();
	std::list<int>::iterator Listtm = List.end();
	
	for (int i = 0; Listt != Listtm; ++Listt)
	{
		std::cout << "List[" << i << "]: " << *Listt << std::endl;
		i++;
	}

	getchar();
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
	
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	mstack.push(0);
	
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
	
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
	
// 	std::stack<int> s(mstack);
	
// 	return 0;
// }