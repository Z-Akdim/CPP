/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:55:11 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/03 09:55:15 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constructor Default the Animal is Called!" << std::endl;
}

Animal::Animal(const Animal &new_cp)
{ 
    std::cout << "copy constructor the Animal is called" << std::endl;
    *this = new_cp;
}

Animal &Animal::operator=(const Animal &new_cp)
{
    std::cout << "Assigned operator the Animal is called" << std::endl;
    if (this != &new_cp)
        this->type = new_cp.type;
    return (*this);
}

std::string    Animal::getType() const
{
    return (this->type);
}

void    Animal::makeSound() const
{
        std::cout << "Animal makeSound Called!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "destructor the Animal is Called!" << std::endl;
}