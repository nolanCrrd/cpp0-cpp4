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
	:_rawBits(0) {}

Fixed::Fixed(const int raw)
	:_rawBits(raw << _fractional_bits) {}

Fixed::Fixed(const float raw) {
	_rawBits = (int)(raw * (1 << _fractional_bits));
}

Fixed::Fixed(const Fixed &other) {
	_rawBits = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		_rawBits = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
	return (_rawBits);
}

void Fixed::setRawBits(const int raw) {
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

bool Fixed::operator>(const Fixed &other) const {
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator>=(const Fixed &other) const {
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<(const Fixed &other) const {
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator<=(const Fixed &other) const {
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed &other) const {
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed &other) const {
	return (!(this == &other));
}

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed result;

	result._rawBits = this->_rawBits + other._rawBits;
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed result;

	result._rawBits = this->_rawBits - other._rawBits;
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const {
	float tmp;

	tmp = this->toFloat() * other.toFloat();
	float result(tmp);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const {
	float tmp;

	tmp = this->toFloat() / other.toFloat();
	float result(tmp);
	return (result);
}

Fixed Fixed::operator++(int) {
	Fixed result;

	result = *this;
	this->_rawBits += 1;
	return (result);
}

Fixed Fixed::operator--(int) {
	Fixed result;

	result = *this;
	this->_rawBits -= 1;
	return (result);
}

Fixed &Fixed::operator++() {
	this->_rawBits += 1;
	return (*this);
}

Fixed &Fixed::operator--() {
	this->_rawBits -= 1;
	return (*this);
}

Fixed Fixed::min(const Fixed &f1, const Fixed &f2) {
	if (f1 <= f2)
		return (f1);
	else
		return (f2);
}

Fixed Fixed::min(Fixed &f1, Fixed &f2) {
	return (Fixed::min((const Fixed)f1, (const Fixed)f2));
}

Fixed Fixed::max(const Fixed &f1, const Fixed &f2) {
	if (f1 >= f2)
		return (f1);
	else
		return (f2);
}

Fixed Fixed::max(Fixed &f1, Fixed &f2) {
	return (Fixed::max((const Fixed)f1, (const Fixed)f2));
}






































