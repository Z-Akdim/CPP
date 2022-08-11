/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:55:31 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/01 10:45:37 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "default constructor FragTrap is called" << std::endl;
    Hitpoints = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const &cop)
{
    std::cout << "copy fragtrap constructor is called" << std::endl;
   *this = cop;
   return ; 
}

FragTrap::FragTrap(std::string name){
    std::cout << "constructor FragTrap is called" << std::endl;
    Name = name;
    Hitpoints = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap&  FragTrap::operator=(FragTrap const &cop)
{
    if (this != &cop)
    {
        this->Name = cop.Name;
        this->Hitpoints = cop.Hitpoints;
        this->Energy_points = cop.Energy_points;
        this->Attack_damage = cop.Attack_damage;
    }
    return *this;
}

void    FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << Name << " attacks " << target <<
                ", causing " << Attack_damage << " points of damage!" << std::endl;
}


FragTrap::~FragTrap(){
    std::cout << "Destructor FragTrap is called" << std::endl; 
}

void FragTrap::highFivesGuys(void){
    std::cout << "Come on HighFive" <<std::endl;
}