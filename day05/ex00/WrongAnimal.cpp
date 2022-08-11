/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:55:52 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/03 10:32:36 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Constructor Default the WrongAnimal is Called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wran)
{
    *this = wran;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wran)
{
    if (this != &wran)
        this->_type = wran._type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
        std::cout << "WrongAnimal makeSound Called!" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor the WrongAnimal is Called!" << std::endl;
}