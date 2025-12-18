/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:35:19 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/11 14:18:31 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <ostream>
#include <string>

Contact::Contact()
	: _first_name(""), _last_name(""), _nickname(""),
      _phone_number(""), _darkest_secret("") {}

Contact::Contact(const std::string &fn, const std::string &ln,
				 const std::string &nn, const std::string &pn,
				 const std::string &ds)
	: _first_name(fn), _last_name(ln), _nickname(nn),
      _phone_number(pn), _darkest_secret(ds) {}

std::ostream &operator<<(std::ostream &os, const Contact &obj)
{
	os << "First name: " + obj.getFirstName() << "\n"
		<< "Last name: " + obj.getLastName() << "\n"
		<< "Nickname: " + obj.getNickname() << "\n"
		<< "Phone number: " + obj.getPhoneNumber() << "\n"
		<< "Darkest secret: " + obj.getDarkestSecret() << "\n";
	return (os);
}

std::string Contact::getFirstName() const {
	return (_first_name);
}

std::string Contact::getLastName() const {
	return (_last_name);
}

std::string Contact::getNickname() const {
	return (_nickname);
}

std::string Contact::getPhoneNumber() const {
	return (_phone_number);
}

std::string Contact::getDarkestSecret() const {
	return (_darkest_secret);
}

void Contact::setFirstName(std::string firstName) {
	_first_name = firstName;
}

void Contact::setLastName(std::string lastName) {
	_last_name = lastName;
}

void Contact::setNickname(std::string nickname) {
	_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	_phone_number = phoneNumber;
}

void Contact::setDarkestSecret(std::string secret) {
	_darkest_secret = secret;
}
