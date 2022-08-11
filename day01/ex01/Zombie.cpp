/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:54:46 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/04 11:03:31 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(std::string name)
{
    _name_ = name;
}

Zombie::Zombie()
{
    std::cout << "constructer of Zombie called" << std::endl;  
}

Zombie::~Zombie()
{
    std::cout << "Destructer of Zombie_name: " << this->_name_ << " called" << std::endl;
}

void    Zombie::announce()
{
    std::cout << "<" << _name_ << ">" << "  Moar___brainz..." << std::endl;
}