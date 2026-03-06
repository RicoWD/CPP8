/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:41:14 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/06 02:50:44 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

/* ************************************************************************** */
// 																			  //
// 						   ORTHODOX CANONICAL FORM							  //
//																	 		  //
/* ************************************************************************** */

Span::Span(): _size(0) {}
Span::Span(unsigned int size): _size(size) {}
Span::Span(const Span& cpy): _size(cpy._size), _vector(cpy._vector) {}
Span& Span::operator=(const Span& cpy)
{
	if (this != &cpy)
	{
		_size	= cpy._size;
		_vector	= cpy._vector;
	}
	return (*this);
}
Span::~Span() {}

/* ************************************************************************** */
// 																			  //
// 							   MEMBER FUNCTIONS								  //
//																	 		  //
/* ************************************************************************** */

void		Span::addNumber(int n)
{
	if (_vector.size() >= _size)
		throw SpanFullException();

	_vector.push_back(n);
}

int		Span::shortestSpan()
{
	if (_vector.size() < 2)
		throw NotEnoughNumbersException();

	std::vector<int> sorted(_vector);
	std::sort(sorted.begin(), sorted.end());

	// adjacent_difference calcule sorted[i] - sorted[i-1] pour chaque element
	// le premier element de sorted est copie tel quel (index 0), on le saute
	std::adjacent_difference(sorted.begin(), sorted.end(), sorted.begin());
	return (*std::min_element(sorted.begin() + 1, sorted.end()));
}

int		Span::longestSpan()
{
	if (_vector.size() < 2)
		throw NotEnoughNumbersException();

	return (*std::max_element(_vector.begin(), _vector.end()) - *std::min_element(_vector.begin(), _vector.end()));
}

/* ************************************************************************** */
// 																			  //
// 							   		EXCEPTIONS								  //
//																	 		  //
/* ************************************************************************** */

const char* Span::SpanFullException::what() const throw()
{
	return ("Span Full Exception");
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return ("Not Enough Numbers Exception");
}
