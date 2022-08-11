/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:20:47 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/01 12:20:47 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    this->type = str;
}
void    Weapon::setType(std::string str)
{
    this->type = str;
}

const std::string&  Weapon::getType()
{
    return (this->type);
}
Weapon::~Weapon()
{
	return ;
}
