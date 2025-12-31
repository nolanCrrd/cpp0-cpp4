/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:37:20 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 13:32:54 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal {
	private:

	Brain *_brain;

	public:

	Dog();
	Dog(std::string type);
	Dog(Dog &other);
	Dog &operator=(Dog &other);
	virtual ~Dog();

	virtual void makeSound() const;
};

#endif
