#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(const Ice &);
    Ice &operator= (const Ice &);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Ice();
};
#endif