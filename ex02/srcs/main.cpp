/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 02:55:42 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/06 13:14:51 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
#include <list>

void	printTitle(std::string title)
{
	std::cout << "=== " << title << " ===" << std::endl;
}

int main()
{
	// MUTANT STACK
	printTitle("Mutant Stack");
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// LIST
	printTitle("List");
	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);

	std::list<int>::iterator itLst = lst.begin();
	std::list<int>::iterator iteLst = lst.end();
	++itLst;
	--itLst;
	while (itLst != iteLst)
	{
		std::cout << *itLst << std::endl;
		++itLst;
	}
	std::list<int> sLst(lst);
	return 0;
}
