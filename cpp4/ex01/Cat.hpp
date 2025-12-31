/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:37:20 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 13:32:50 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal {
	private:

	Brain *_brain;

	public:

	Cat();
	Cat(std::string type);
	Cat(Cat &other);
	Cat &operator=(Cat &other);
	virtual ~Cat();

	virtual void makeSound() const;
};

#endif
