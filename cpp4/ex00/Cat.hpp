/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:37:20 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:38:56 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <string>

class Cat : public Animal {
	public:

	Cat();
	Cat(std::string type);
	Cat(Cat &other);
	Cat &operator=(Cat &other);
	virtual ~Cat();

	virtual void makeSound() const;
};

#endif
