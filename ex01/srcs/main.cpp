/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:29:20 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/06 14:22:45 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <cstdlib>

void	printTitle(const std::string &title)
{
	std::cout << "\n=== " << title << " ===" << std::endl;
}

int	main(void)
{
	Span	sp;
	Span	big;
	Span	tiny;

	// Given by subject
	printTitle("Subject Test");
	sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	// addNumber by range
	printTitle("Range Test (10000 numbers)");
	big = Span(10000);
	std::vector<int> v;
	for (int i = 0; i < 10000; i++)
		v.push_back(std::rand());
	big.addNumber(v.begin(), v.end());
	std::cout << "shortestSpan: " << big.shortestSpan() << std::endl;
	std::cout << "longestSpan:  " << big.longestSpan() << std::endl;


	// Exceptions
	printTitle("Exception Tests");
	try { sp.addNumber(42); }
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }
	tiny = Span(1);
	tiny.addNumber(7);
	try { std::cout << tiny.shortestSpan() << std::endl; }
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }
	try
	{
		std::vector<int> overflow(5, 0);
		tiny.addNumber(overflow.begin(), overflow.end());
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }
	return (0);
}
