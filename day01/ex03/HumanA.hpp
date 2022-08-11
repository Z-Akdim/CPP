/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 13:04:55 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/02 14:44:04 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "./Weapon.hpp"

class HumanA
{
    private:
        std::string _name_;
        Weapon *weapon_A;
    public:
        HumanA(std::string name, Weapon &w);
        void attack();
        HumanA();
        ~HumanA();
};

#endif