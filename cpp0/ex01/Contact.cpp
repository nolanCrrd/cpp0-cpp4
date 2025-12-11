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

Contact::Contact()
	: first_name(""), last_name(""), nickname(""),
      phone_number(""), darkest_secret("") {}

Contact::Contact(const std::string &fn, const std::string &ln,
				 const std::string &nn, const std::string &pn,
				 const std::string &ds)
	: first_name(fn), last_name(ln), nickname(nn),
      phone_number(pn), darkest_secret(ds) {}

std::ostream &operator<<(std::ostream &os, const Contact &obj)
{
	os << "First name: " + obj.first_name << "\n"
		<< "Last name: " + obj.last_name << "\n"
		<< "Nickname: " + obj.nickname << "\n"
		<< "Phone number: " + obj.phone_number << "\n"
		<< "Darkest secret: " + obj.darkest_secret << "\n";
	return (os);
}
