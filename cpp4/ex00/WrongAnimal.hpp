/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:32:02 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:46:58 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
	private:

	std::string _type;

	public:

	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal &other);
	WrongAnimal &operator=(WrongAnimal &other);
	~WrongAnimal();

	std::string getType() const;
	void setType(std::string type);
	void makeSound() const;
};

#endif
