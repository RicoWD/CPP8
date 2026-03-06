/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:22:09 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/06 02:28:32 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <vector>
# include <algorithm>
# include <numeric>
# include <exception>
# include <iostream>
# include <iomanip>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>		_vector;

	public:
		// OCF
		Span();
		Span(unsigned int size);
		Span(const Span& cpy);
		Span& operator=(const Span& cpy);
		~Span();

		// Member Function
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

		// Template
		template <typename T>
		void	addNumber(T begin, T end)
		{
			if (_vector.size() + (size_t)std::distance(begin, end) > _size)
				throw SpanFullException();
			_vector.insert(_vector.end(), begin, end);
		}

		// Exception
		class SpanFullException: public std::exception { public: virtual const char* what() const throw(); };
		class NotEnoughNumbersException: public std::exception { public: virtual const char* what() const throw(); };
};
