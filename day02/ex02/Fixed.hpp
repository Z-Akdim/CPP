/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:20:27 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/27 16:23:40 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{

    private:

        int fixed_point_value;
        static const int nbr_Fractional_bits = 8;

    public:

        Fixed(const int int_nbr);
        Fixed(const float fl_nbr);

        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed& operator=(const Fixed &cop);

        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed(Fixed const &cop);

        Fixed();
        ~Fixed();

        bool    operator>(const Fixed &p);
        bool    operator<(const Fixed &p);
        bool    operator>=(const Fixed &p);
        bool    operator<=(const Fixed &p);
        bool    operator==(const Fixed &p);
        bool    operator!=(const Fixed &p);

        Fixed   operator+(const Fixed &nbr);
        Fixed   operator-(const Fixed &nbr);
        Fixed   operator*(const Fixed &nbr);
        Fixed   operator/(const Fixed &nbr);

        Fixed&   operator++();
        Fixed   operator++(int);
        Fixed&   operator--();
        Fixed   operator--(int);
        
        static Fixed &min(Fixed &f1, Fixed &f2);
        static Fixed &max(Fixed &f1, Fixed &f2);
        static const Fixed &max(const Fixed &f1, const Fixed &f2);
        static const Fixed &min(const Fixed &f1, const Fixed &f2);
        
};

std::ostream&        operator<<(std::ostream &ostr, const Fixed &val);

#endif