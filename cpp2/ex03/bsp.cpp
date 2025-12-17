/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:43:37 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/17 17:12:29 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <cstdlib>

Fixed	area(const Point &point1, const Point &point2, const Point &point3) {
	Fixed res;
	float tmp;

	res = (point1.getX() * (point2.getY() - point3.getY())
		   + point2.getX() * (point3.getY() - point1.getY())
		   + point3.getX() * (point1.getY() - point2.getY())) / 2;
	tmp = std::abs(res.toFloat());
	res.setRawBits(tmp);
	return (res);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed A = area(a, b, c);
	Fixed A1 = area(point, b, c);
	Fixed A2 = area(a, point, c);
	Fixed A3 = area(a, b, point);
	return (A == A1 + A2 + A3);
}


