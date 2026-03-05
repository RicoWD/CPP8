/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:36:17 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/05 02:07:36 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(T const &container, int n)
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), n);
	
	if (it == container.end())
		throw std::runtime_error("Value not found in container");

	std::cout	<< "Found " << n << " at index "
				<< std::distance(container.begin(), it) << std::endl;
	return (it);
}
