#ifndef AMATERIA_H
#define AMATERIA_H

#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string _type;
public:
    AMateria();
    AMateria(std::string const & type);
    AMateria(const AMateria &);
    virtual ~AMateria();
    AMateria &operator=(const AMateria &);
    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif