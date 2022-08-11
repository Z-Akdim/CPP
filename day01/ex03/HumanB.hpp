/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:04:41 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/02 14:49:41 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "./Weapon.hpp"

class HumanB
{
    private :
        std::string _name_;
        Weapon *Weapon_b;
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &w);
        void    attack();
};

#endif