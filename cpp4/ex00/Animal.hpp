/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:32:02 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:46:58 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal {
	private:

	std::string _type;

	public:

	Animal();
	Animal(std::string type);
	Animal(Animal &other);
	Animal &operator=(Animal &other);
	~Animal();

	std::string getType() const;
	void setType(std::string type);
	virtual void makeSound() const;
};

#endif
