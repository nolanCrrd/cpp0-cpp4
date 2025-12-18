/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:08:42 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 12:08:59 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <endian.h>
#include <iostream>
#include <ostream>
#include <iomanip>

PhoneBook::PhoneBook()
	:_contacts(), _oldest(0), _size(0){}

static std::string	get_truncated(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0,9) + ".");
	return (str);
}

std::ostream &operator<<(std::ostream &os, const PhoneBook &obj) {
	int	i;

	i = 0;
	os << '|' << std::setw(10)
		<< "index"
		<< '|' << std::setw(10)
		<< "first name"
		<< '|' << std::setw(10)
		<< "last name"
		<< '|' << std::setw(10) 
		<< "nickname" << "|\n";
	while (i < obj.getSize()) {
		os << '|' << std::setw(10)
			<< i
			<< '|' << std::setw(10)
			<< get_truncated(obj.getContact()[i].getFirstName())
			<< '|' << std::setw(10)
			<< get_truncated(obj.getContact()[i].getLastName())
			<< '|' << std::setw(10) 
			<< get_truncated(obj.getContact()[i].getNickname()) << "|\n";
		i++;
	}
	return (os);
}

void PhoneBook::add_contact(Contact contact) {
	if (_size < 8)
		_contacts[_size++] = contact;
	else {
		_contacts[_oldest] = contact;
		_oldest++;
		_oldest %= 8;
	};
}

int	PhoneBook::getSize() const {
	return (_size);
}

int PhoneBook::getOldest() const {
	return (_oldest);
}

const Contact *PhoneBook::getContact() const {
	return (_contacts);
}
