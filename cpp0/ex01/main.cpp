/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 13:50:29 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/19 09:04:33 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

static int	prompt_user(std::string &input_sorage)
{
	std::cout << "\n";
	std::cout << "Your magic phone book $> ";
	if (!std::getline(std::cin, input_sorage))
		return (1);
	return (0);
}

static void	create_contact(PhoneBook &book)
{
	Contact	contact;
	std::string input;
	std::string tmp;

	std::cout << "\n";
	std::cout << "Enter the contact's informations:\n";
	std::cout << "First name: ";
	if (!std::getline(std::cin, input))
		return ;
	contact.setFirstName(input);
	std::cout << "Last name: ";
	if (!std::getline(std::cin, input))
		return ;
	contact.setLastName(input);
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, input))
		return ;
	contact.setNickname(input);
	std::cout << "Phone number: ";
	if (!std::getline(std::cin, input))
		return ;
	contact.setPhoneNumber(input);
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, input))
		return ;
	contact.setDarkestSecret(input);
	book.add_contact(contact);
}

static void	search(PhoneBook &book)
{
	int	chosen_index;
	std::string input;
	int	size;

	std::cout << "\n";
	size = book.getSize();
	if (size <= 0)
		return ;
	std::cout << book;
	std::cout << "\n";
	std::cout << "Contact to display: ";
	if (!std::getline(std::cin, input))
		return ;
	chosen_index = std::atoi(input.c_str());
	if (chosen_index > size - 1) {
		std::cout << "Invalid contact\n";
		return ;
	}
	std::cout << "\n";
	std::cout << book.getContact()[chosen_index];
}

int main(void)
{
	PhoneBook	book;
	std::string	input;

	while (1) {
		if (prompt_user(input))
			return (1);
		if (input == "SEARCH")
			search(book);
		else if (input == "EXIT")
			break ;
		else if (input == "ADD")
			create_contact(book);
	}
	return (0);
}
