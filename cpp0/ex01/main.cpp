/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:50:29 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/11 14:19:15 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstddef>
#include <iostream>
#include <string>

static void	prompt_user(std::string &input_sorage)
{
	std::cout << "\n";
	std::cout << "Your magic phone book $> ";
	std::cin >> input_sorage;
}

static void	create_contact(PhoneBook &book)
{
	Contact	contact;

	std::cout << "\n";
	std::cout << "Enter the contact's informations:\n";
	std::cout << "First name: ";
	std::cin >> contact.first_name;
	std::cout << "Last name: ";
	std::cin >> contact.last_name;
	std::cout << "Nickname: ";
	std::cin >> contact.nickname;
	std::cout << "Phone number: ";
	std::cin >> contact.phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> contact.darkest_secret;

	book.add_contact(contact);
}

static void	search(PhoneBook &book)
{
	size_t	chosen_index;
	size_t	size;

	std::cout << "\n";
	size = book.contacts.size();
	if (size <= 0)
		return ;
	std::cout << book;
	std::cout << "\n";
	std::cout << "Contact to display: ";
	std::cin >> chosen_index;
	if (chosen_index > size) {
		std::cout << "Invalid contact\n";
		return ;
	}
	std::cout << "\n";
	std::cout << book.contacts[chosen_index];
}

int main(void)
{
	PhoneBook	book;
	std::string	input;

	while (1) {
		prompt_user(input);
		if (input == "SEARCH")
			search(book);
		else if (input == "EXIT")
			break ;
		else if (input == "ADD")
			create_contact(book);
		else
			std::cout << "Invalid command\n";
	}
	return (0);
}
