/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:38:21 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/09 14:42:33 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <cctype>
#include <iostream>

int main(int argc, char **argv)
{
	std::string	str;
	int			i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		i = 1;
		while (i < argc)
			str.append(argv[i++]);
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str;
	}
	std::cout << "\n";
	return (0);
}
