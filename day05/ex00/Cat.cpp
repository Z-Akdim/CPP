/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:55:26 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/07 08:20:52 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Default the Cat is Called!" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &new_cp)
{
    std::cout << "copy constructor the Cat is called" << std::endl;

    *this = new_cp;
}

Cat &Cat::operator=(const Cat &new_cp)
{
    std::cout << "Assigned operator the Cat is called" << std::endl;
    if (this != &new_cp)
        this->type = new_cp.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Cat makeSound Called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destructor the Cat is Called!" << std::endl;
}