/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:21:48 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/01 10:46:27 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap is Created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap is Created!" << std::endl;
    this->Name = name;
    ClapTrap::Name = name + "_clap_name";
    this->Attack_damage = FragTrap::Attack_damage;
    this->Hitpoints = FragTrap::Hitpoints;
    this->Energy_points = ScavTrap::Energy_points;

    // std::cout << "Attack_damage" << Attack_damage << std::endl;
    // std::cout << "Hitpoints" <<  Hitpoints<< std::endl;
    // std::cout << "Energy_points" << Energy_points << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &new_cp)
{
    std::cout << "Constructor Copy the DiamondTrap is Called!" << std::endl;
    *this = new_cp;
    return ;
}

DiamondTrap &DiamondTrap::operator= (const DiamondTrap &new_cp)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    if (this != &new_cp)
    {
        this->Name = new_cp.Name;
        ClapTrap::Name = new_cp.Name + "_clap_name";
        this->Hitpoints = new_cp.Hitpoints;
        this->Energy_points = new_cp.Energy_points;
        this->Attack_damage = new_cp.Attack_damage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap is Destroyed!" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Name DiamonTrap is " << Name << " and Name the ClapTrap is " << ClapTrap::Name << std::endl;
}