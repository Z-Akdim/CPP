/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:10:40 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/01 10:42:54 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "constructor ClapTrap is called" << std::endl;
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "constructor ClapTrap is called" << std::endl;
    Name = name;
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &new_cp)
{
    std::cout << "copy constructor ClapTrap is called" << std::endl;
    *this = new_cp;
    return ;
}

ClapTrap&  ClapTrap::operator=(ClapTrap const &new_cp){
   
    if (this != &new_cp) 
    {
        this->Name = new_cp.Name;
        this->Hitpoints = new_cp.Hitpoints;
        this->Energy_points = new_cp.Energy_points;
        this->Attack_damage = new_cp.Attack_damage;
    }
    return *this;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << Name << " attacks " << target <<
    ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "take damage " << amount << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "BeRepaired " << amount << std::endl;
}

ClapTrap::~ClapTrap(){

    std::cout << "destructor ClapTrap is called" << std::endl;
}