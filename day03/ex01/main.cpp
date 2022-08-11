/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:38:42 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/29 11:38:27 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ClapTrap clp("zakarya");
    clp.attack("soufiane");
    clp.takeDamage(7);
    clp.beRepaired(3);


    ScavTrap Sca("Akdim");
    Sca.attack("El-hamri");
    Sca.takeDamage(70);
    Sca.beRepaired(20);
    Sca.guardGate();
}