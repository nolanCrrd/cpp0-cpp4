/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 11:53:05 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/14 11:58:14 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class	Harl {
	public:
	
	void	complain(std::string level);

	private:

	static void	_debug();
	static void	_info();
	static void	_warning();
	static void	_error();
};

#endif
