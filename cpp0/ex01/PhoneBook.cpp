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
#include <cstddef>
#include <endian.h>
#include <iostream>
#include <ostream>
#include <iomanip>

PhoneBook::PhoneBook()
	:contacts(), oldest(0), size(0){}

static std::string	get_truncated(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0,9) + ".");
	return (str);
}

std::ostream &operator<<(std::ostream &os, const PhoneBook &obj) {
	size_t	i;

	i = 0;
	os << '|' << std::setw(10)
		<< "index"
		<< '|' << std::setw(10)
		<< "first name"
		<< '|' << std::setw(10)
		<< "last name"
		<< '|' << std::setw(10) 
		<< "nickname" << "|\n";
	while (i < obj.size) {
		os << '|' << std::setw(10)
			<< i
			<< '|' << std::setw(10)
			<< get_truncated(obj.contacts[i].first_name)
			<< '|' << std::setw(10)
			<< get_truncated(obj.contacts[i].last_name)
			<< '|' << std::setw(10) 
			<< get_truncated(obj.contacts[i].nickname) << "|\n";
		i++;
	}
	return (os);
}

void PhoneBook::add_contact(Contact contact) {
	if (size < 8)
		contacts[size++] = contact;
	else {
		contacts[oldest] = contact;
		oldest++;
		oldest %= 8;
	};
}
