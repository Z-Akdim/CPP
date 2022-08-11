/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:06:42 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/01 10:45:03 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
   std::cout << "Default Constructor ScavTrap Is Called" << std::endl;
   Energy_points = 50;
}
 
ScavTrap::ScavTrap(std::string name){
    std::cout << "constructor ScavTrap is called" << std::endl;
    Name = name;
    Energy_points = 50;
}

ScavTrap::ScavTrap(ScavTrap const &new_cp)
{
    std::cout << "copy constructor ScavTrap is called" << std::endl;
    *this = new_cp;
    return ;
}

ScavTrap&  ScavTrap::operator=(ScavTrap const &new_cp){

   if (this != &new_cp)
   {
    this->Name = new_cp.Name;
    this->Hitpoints = new_cp.Hitpoints;
    this->Energy_points = new_cp.Energy_points;
    this->Attack_damage = new_cp.Attack_damage;
   }
    return *this;
}

void    ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << Name << " attacks " << target <<
                ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    
    std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor Of ScavTrap is Called" << std::endl;
}