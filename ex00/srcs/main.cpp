/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 01:17:24 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/05 02:03:46 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/easyfind.hpp>
#include <vector>

int main()
{
	int				arr[] = {123, 21, 42, 43, 4};
	std::vector<int>	nbs(arr, arr + 5);

	try { easyfind(nbs, 42); }
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }

	try { easyfind(nbs, 99); }
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }

	return (0);
}
