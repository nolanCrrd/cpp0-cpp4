/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 10:37:20 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 10:38:56 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal {
	public:

	WrongCat();
	WrongCat(std::string type);
	WrongCat(WrongCat &other);
	WrongCat &operator=(WrongCat &other);
	~WrongCat();
};

#endif
