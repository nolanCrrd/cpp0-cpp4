/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 16:38:06 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/17 17:11:20 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
class	Point {
	private:

	const Fixed x;
	const Fixed y;

	public:

	Point();
	Point(const float &x, const float &y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();

	const Fixed &getX() const;
	const Fixed &getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
