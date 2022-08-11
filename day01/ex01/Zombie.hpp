/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:45:53 by zakdim            #+#    #+#             */
/*   Updated: 2021/08/31 16:04:16 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private:
            std::string _name_;
    public:
            ~Zombie();
            Zombie();
            void    setName(std::string);
            void    announce();
};
Zombie* zombieHorde( int N, std::string);

#endif