/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:18:02 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/27 13:21:42 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int fixed_point_value;
	static const int nbr_Fractional_bits = 8;
public:
	Fixed();
	Fixed(Fixed const& rhs);
	~Fixed();
	Fixed&	operator= (Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
