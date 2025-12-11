/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:28:16 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/11 14:03:20 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <ostream>
#include <vector>

class	PhoneBook
{
	public:
		std::vector<Contact>	contacts;
		int						oldest;

		PhoneBook();
		void	add_contact(Contact contact);
		void	search_contact();
		friend std::ostream &operator<<(std::ostream &os, const PhoneBook &obj);
};

#endif
