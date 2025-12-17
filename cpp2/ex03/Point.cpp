/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:38:25 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/17 17:13:16 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point()
	:x(Fixed(0)), y(Fixed(0)) {}

Point::Point(const float &x, const float &y)
	:x(Fixed(x)), y(Fixed(y)) {}

Point::Point(const Point &other)
	:x(other.x), y(other.y) {}

Point::~Point() {}

Point &Point::operator=(const Point &other) {
	(void)other;
	return (*this);
}

const Fixed &Point::getX() const{
	return (x);
}

const Fixed &Point::getY() const{
	return (y);
}


























