#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice &copy_ice)
{
    *this = copy_ice;
}

Ice &Ice::operator= (const Ice &new_ice)
{
    if (this != &new_ice)
        this->_type = new_ice._type;
    return *this;
}

AMateria* Ice::clone() const
{
    AMateria *m = new Ice();
    return m;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}

Ice::~Ice()
{
}