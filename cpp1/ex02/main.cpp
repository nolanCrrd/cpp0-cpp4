/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 12:28:29 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 12:33:51 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;
	
	std::cout << "Pointer:\n";
	std::cout << "string adress: " << &str << "\n";
	std::cout << "pointer adress: " << ptr << "\n";
	std::cout << "reference adress: " << &ref << "\n";

	std::cout << "\nValues:\n";
	std::cout << "string value: " << str << "\n";
	std::cout << "pointer value: " << *ptr << "\n";
	std::cout << "reference reference: " << ref << "\n";
}
