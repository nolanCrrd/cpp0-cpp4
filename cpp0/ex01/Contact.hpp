/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:28:13 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/11 13:51:09 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class	Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public:
		Contact();
		Contact(const std::string &fn, const std::string &ln,
            const std::string &nn, const std::string &pn,
            const std::string &ds);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
		void setFirstName(std::string);
		void setLastName(std::string);
		void setNickname(std::string);
		void setPhoneNumber(std::string);
		void setDarkestSecret(std::string);


};

std::ostream& operator<<(std::ostream &os, const Contact &obj);


#endif
