/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erpascua <erpascua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 15:41:14 by erpascua          #+#    #+#             */
/*   Updated: 2026/03/05 20:43:44 by erpascua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

/* ************************************************************************** */
// 																			  //
// 						   ORTHODOX CANONICAL FORM							  //
//																	 		  //
/* ************************************************************************** */

Span::Span(const int size): _size(size) {};
Span::Span(const Span& cpy): _size(cpy._size), _vector(cpy._vector) {};
Span& Span::operator=(const Span& cpy)
{
	if (this != &cpy)
	{
		_size	= cpy._size;
		_vector	= cpy._vector;
	}
	return (*this);
}
Span::~Span() {};

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
};

int		shortestSpan()
{
	return (_vector)
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

const char* Span::OverflowRangeException::what() const throw()
{
	return ("Overflow Range Exception");
}

// span plein
// span oofrrange 
// maxsize
// empty array
// less than 2 nbs for shortesSpan
