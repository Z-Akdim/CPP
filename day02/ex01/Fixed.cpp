/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:19:45 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/27 14:19:48 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" <<std::endl;
    fixed_point_value = 0;
}

Fixed::Fixed(Fixed const &cop)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this = cop;
}

Fixed&	Fixed::operator=(const Fixed &cop)
{
    std::cout << "Assignation operator called" << std::endl;
	setRawBits(cop.fixed_point_value);
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}

void	Fixed::setRawBits(int const raw)
{
	fixed_point_value = raw;
}

Fixed::Fixed(const float fl_nbr)
{
    std::cout << "Float constructor called" <<std::endl;
    this->fixed_point_value = roundf((fl_nbr * (1 << nbr_Fractional_bits)));
}

float Fixed::toFloat(void) const
{
	return (float)fixed_point_value / (1 << nbr_Fractional_bits);
	
}

Fixed::Fixed(const int int_nbr)
{
    std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = int_nbr << nbr_Fractional_bits;
}

int Fixed::toInt( void ) const
{
	return ((fixed_point_value / ( 1 << nbr_Fractional_bits)));
}

std::ostream&	operator <<(std::ostream &ostr, const Fixed &val)
{
	ostr << val.toFloat();
	return (ostr);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
}