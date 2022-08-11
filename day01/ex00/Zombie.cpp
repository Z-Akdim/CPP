/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:07:47 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/07 11:51:23 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(std::string name)
{
    _name_ = name;
}

Zombie::Zombie()
{
    return ;
}

Zombie::Zombie(std::string name)
{
    _name_ = name;
    std::cout << "constructer of Zombie name : " << _name_ << " Called" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Destructer of Zombie_name: " << this->_name_ << " called" << std::endl;
}

void    Zombie::announce()
{
    std::cout << "<" << _name_ << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
