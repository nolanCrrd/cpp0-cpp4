/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 13:24:21 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 13:51:43 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain() {
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain &other) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain &Brain::operator=(Brain &other) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destroyed" << std::endl;
}

const std::string *Brain::getIdeas() const {
	return (_ideas);
}
