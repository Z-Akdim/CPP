#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &);
    Cure &operator= (const Cure &);
    AMateria* clone() const;
    void use(ICharacter& target);
    ~Cure();
};
#endif