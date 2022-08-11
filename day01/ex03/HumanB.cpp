/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:20:16 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/01 12:20:16 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name_ = name;
}

void HumanB::setWeapon(Weapon &w)
{
    this->Weapon_b = &w;
}

void HumanB::attack()
{
    if (this->Weapon_b)
        std::cout << this->_name_ << "  attacks with his " << this->Weapon_b->getType() << std::endl;
}

HumanB::~HumanB()
{
    return ;
}