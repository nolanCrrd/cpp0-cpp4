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

class	Contact
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;

		Contact();
		Contact(const std::string &fn, const std::string &ln,
            const std::string &nn, const std::string &pn,
            const std::string &ds);

		friend std::ostream& operator<<(std::ostream &os, const Contact &obj);
};

#endif
