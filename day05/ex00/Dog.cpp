/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:55:34 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/03 09:55:35 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Default Constructor the Dog is Called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &new_cp){
    std::cout << "Copy the Dog is Called" << std::endl;
    *this = new_cp;
}

Dog& Dog::operator=(Dog const &new_cp){
    std::cout << "Asssigned operator Dog is Called" << std::endl;
    if (this != &new_cp)
        this->type = new_cp.type;
    return *this;
}
void    Dog::makeSound() const{
    std::cout << "Dog makeSound Called!" << std::endl;
}
Dog::~Dog()
{
    std::cout<< "Destractor The Dog is Called" << std::endl;
}