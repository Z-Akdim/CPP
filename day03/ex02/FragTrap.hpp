
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{

    public:
            FragTrap();
            ~FragTrap();
            FragTrap(std::string);
            void highFivesGuys(void);
            FragTrap(FragTrap const &cop);
            FragTrap& operator=(FragTrap const &cop);
            void    attack(std::string const & target);
};

#endif