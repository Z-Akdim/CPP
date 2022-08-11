/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:09:57 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/27 15:29:02 by zakdim           ###   ########.fr       */
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
	*this = cop;
}

Fixed&	Fixed::operator=(const Fixed &cop)
{
	setRawBits(cop.fixed_point_value);
	return (*this);
}

int Fixed::getRawBits(void) const
{
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

Fixed::~Fixed(){
    
}

//--------------------------------------------->Six comparison operators<-------------------------------//

bool Fixed::operator>(const Fixed &p)
{
    return (this->fixed_point_value > p.fixed_point_value);
}

bool Fixed::operator<(const Fixed &p)
{
    return (this->fixed_point_value < p.fixed_point_value);
}

bool Fixed::operator>=(const Fixed &p)
{
    return (fixed_point_value >= p.fixed_point_value);
}

bool Fixed::operator<=(const Fixed &p)
{
    return (fixed_point_value <= p.fixed_point_value);
}

bool Fixed::operator==(const Fixed &p)
{
    return (fixed_point_value == p.fixed_point_value);
}

bool Fixed::operator!=(const Fixed &p)
{
    return (fixed_point_value != p.fixed_point_value);
}

//--------------------------------------------->arithmetic operators<----------------------------------//

Fixed   Fixed::operator+(const Fixed &nbr)
{
    Fixed ret;

    ret.fixed_point_value = this->fixed_point_value + nbr.fixed_point_value;
    return (ret);
}

Fixed   Fixed::operator-(const Fixed &nbr)
{
    Fixed ret;

    ret.fixed_point_value = this->fixed_point_value - nbr.fixed_point_value;
    return (ret);
}

Fixed   Fixed::operator*(const Fixed &nbr)
{
    Fixed tmp;
    
    tmp.fixed_point_value  = this->fixed_point_value  * nbr.fixed_point_value;
    
    tmp.fixed_point_value  = tmp.toFloat();
    
    return tmp;
}

Fixed   Fixed::operator/(const Fixed &nbr)
{
    Fixed tmp;
    
    tmp.fixed_point_value  = this->fixed_point_value  / nbr.toFloat();
    
    return tmp;
}

//---------------------------------------->pre-increment | post-increment<--------------------------------//


//Pre Increment Operation

Fixed& Fixed::operator++()
{
    ++fixed_point_value;
    return (*this);
}

//Post Increment Operation

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->operator++();
    return (tmp);
}

//Pre Decrement Operation

Fixed& Fixed::operator--()
{
    --fixed_point_value;
    return (*this);
}

//Post Decrement Operation

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->operator++();
    return (tmp);
}

//-----------------min |||  max----------------//

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 <= f2)
        return f1;
    else
        return f2;
    
}

Fixed const &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if ((Fixed)f1 <= (Fixed)f2)
        return f1;
    else
        return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 >= f2)
        return f1;
    else
        return f2;
}

Fixed const &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if ((Fixed)f1 >= (Fixed)f2)
        return f1;
    else
        return f2;
}
