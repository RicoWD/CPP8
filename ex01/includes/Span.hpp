/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:22:09 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/05 20:38:26 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <vector>
# include <exception>
# include <iostream>
// # include <iomanip>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>		_vector;

	public:
		// OCF
		Span(const int size);
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
			for (T it = begin; it != end; it++)
				_vector.push_back(*it);
		}

		// Exception
		class SpanFullException: public std::exception { public: virtual const char* what() const throw(); };
		class OverflowRangeException: public std::exception { public: virtual const char* what() const throw();}
};
