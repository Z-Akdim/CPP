/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:02:42 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/07 10:33:40 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie {
    private:
	    std::string _name_;
    public:
	    Zombie();
	    Zombie(std::string);
	    ~Zombie();
	    void    setName(std::string);
	    void    announce();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif