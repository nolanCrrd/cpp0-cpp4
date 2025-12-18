/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:28:16 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 12:12:53 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"
#include <ostream>

class	PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_oldest;
		int		_size;

	public:
		PhoneBook();
		void	add_contact(Contact contact);
		void	search_contact();
		int		getSize() const;
		int		getOldest() const;
		const Contact	*getContact() const;
};

std::ostream &operator<<(std::ostream &os, const PhoneBook &obj);

#endif
