
#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string);
        DiamondTrap(const DiamondTrap &);
        DiamondTrap &operator=(const DiamondTrap &);
        ~DiamondTrap();
        void    whoAmI();
};

#endif