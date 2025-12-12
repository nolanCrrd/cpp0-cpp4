/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   looser_sed.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 13:54:37 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/12 15:58:41 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "looser_sed.hpp"
#include <cstddef>
#include <fstream>
#include <string>

int	loser_sed(std::string infile, std::string s1, std::string s2) {
	std::string	line;
	size_t	last_found;

	std::ifstream in_file(infile.c_str());
	if (!in_file.is_open())
		return (1);
	std::ofstream out_file((infile + ".replace").c_str());
	if (!out_file.is_open())
		return (1);
	last_found = 0;
	while (std::getline(in_file, line))
	{
		last_found = line.find(s1);
		while (last_found != std::string::npos)
		{
			line.erase(last_found, s1.size());
			line.insert(last_found, s2);
			last_found += s2.size();
			last_found = line.find(s1, last_found);
		}
		out_file << line << "\n";
	}
	return (0);
}
