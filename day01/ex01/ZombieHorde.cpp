/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:56:26 by zakdim            #+#    #+#             */
/*   Updated: 2021/08/31 16:04:24 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    std::string new_string;
    
    Zombie *zomb = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        new_string = name + std::to_string(i);
        zomb[i].setName(new_string);
        zomb[i].announce();
    }
    return zomb;
}