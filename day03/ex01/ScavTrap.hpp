#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    public:
            ScavTrap(std::string);
            void guardGate();
            ScavTrap(ScavTrap const &new_cp);
            ScavTrap&  operator=(ScavTrap const &new_cp);
            void    attack(std::string const & target);
            ScavTrap();
            ~ScavTrap();
};

#endif