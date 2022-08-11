/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:56:00 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/03 10:51:37 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Constructor Default the WrongCat is Called!" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wcat)
{
    *this = wcat;
}

WrongCat &WrongCat::operator=(const WrongCat &wcat)
{
    if (this != &wcat)
        this->_type = wcat._type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat makeSound Called!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "destructor the WrongCat is Called!" << std::endl;
}