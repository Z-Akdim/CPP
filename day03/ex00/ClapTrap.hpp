/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:38:47 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/29 14:17:11 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap{
    private:
            std::string Name;
            int Hitpoints;
            int Energy_points;
            int Attack_damage;
    public:
            void attack(std::string const & target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            ClapTrap(ClapTrap const &new_cp);
            ClapTrap&  operator=(ClapTrap const &new_cp);
            ClapTrap(std::string);
            ClapTrap();
            ~ClapTrap();
};

#endif