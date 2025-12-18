/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncorrear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:34:34 by ncorrear          #+#    #+#             */
/*   Updated: 2025/12/17 12:46:39 by ncorrear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class	Fixed {
	private:

	int					_rawBits;
	static const int	_fractional_bits = 8;

	public:

	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(int const raw);
};

#endif
