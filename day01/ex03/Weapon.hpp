/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 12:55:38 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/02 13:03:11 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
    private:
            std::string type;
    public:
          Weapon(std::string);
          void  setType(std::string);
          const std::string&  getType();
          ~Weapon();
};

#endif