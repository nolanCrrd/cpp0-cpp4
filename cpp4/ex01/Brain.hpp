/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 13:22:18 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/31 13:31:17 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
class Brain {
	private:
	
	std::string _ideas[100];

	public:

	Brain();
	Brain(Brain &other);
	Brain &operator=(Brain& other);
	~Brain();

	const std::string *getIdeas() const;
};

#endif
