/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:17:24 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/05 12:57:09 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/easyfind.hpp>
#include <vector>

int main()
{
	std::vector<int>	nbs;
	nbs.push_back(123);
	nbs.push_back(21);
	nbs.push_back(42);
	nbs.push_back(43);
	nbs.push_back(4);

	try 
	{
		easyfind(nbs, 42); 
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl; 
	}

	try 
	{
		easyfind(nbs, 99);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	nbs.push_back(99);
	// nbs.pop_back();
	
	try 
	{
		easyfind(nbs, 99);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
