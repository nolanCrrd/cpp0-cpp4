/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:34:26 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/17 12:46:21 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed()
	:_rawBits(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int raw)
	:_rawBits(raw << _fractional_bits) {}

Fixed::Fixed(const float raw) {
	_rawBits = (int)(raw * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called\n";
	_rawBits = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignement called\n";
	if (this != &other)
		_rawBits = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (_rawBits);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called\n";
	_rawBits = raw;
}

int Fixed::toInt() const {
	return (_rawBits / std::pow(2, _fractional_bits));
}

float Fixed::toFloat() const {
	float val;

	val = (float)_rawBits / (1 << _fractional_bits);
	return (val);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj) {
	os << obj.toFloat();
	return (os);
}
