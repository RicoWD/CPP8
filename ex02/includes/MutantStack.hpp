/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 19:36:17 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/06 03:01:07 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <stack>
# include <iterator>
# include <string>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		// OCF
		MutantStack() {}
		MutantStack(const MutantStack& cpy) : std::stack<T>(cpy) {}
		MutantStack& operator=(const MutantStack& cpy)
		{
			if (this != &cpy)
				std::stack<T>::operator=(cpy);
			return (*this);
		}
		virtual ~MutantStack() {}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};
