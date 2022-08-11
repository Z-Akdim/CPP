/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:30:53 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/07 11:02:24 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constructor Default the Dog is Called!" << std::endl;
    this->type = "Dog";
    brn = new Brain();
}

void    Dog::makeSound() const
{
    std::cout << "Dog makeSound Called!" << std::endl;
}

Dog::Dog(const Dog &new_dog)
{
    std::cout << "Constructor Copy the Dog is Called!" << std::endl;
    (void)new_dog;
    this->brn = new Brain();
}

Dog &Dog::operator= (const Dog &new_dog)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    if (this != &new_dog)
        *brn = *(new_dog.brn);
    return (*this);
}

void    Dog::print_brain(const Dog &dog)
{
    std::cout << dog.brn << std::endl;
}

Dog::~Dog()
{
    delete brn;
    std::cout << "destructor the Dog is Called!" << std::endl;
}