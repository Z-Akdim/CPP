/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:20:00 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/01 12:20:00 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &w)
{
    this->_name_ = name;
    this->weapon_A = &w;
}

void HumanA::attack()
{
    if ( this->weapon_A)
        std::cout << this->_name_ << "  attacks with his " << this->weapon_A->getType() << std::endl;
}

HumanA::~HumanA()
{
	return ;
}