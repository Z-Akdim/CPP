#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Constructor Default the AMateria is Called!" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

AMateria::AMateria(const AMateria &copy_ama)
{
    *this = copy_ama;
}

AMateria &AMateria::operator=(const AMateria &new_ama)
{
    if (this != &new_ama)
        this->_type = new_ama._type;
    return (*this);
}

void    AMateria::use(ICharacter &target)
{
    (void)target;
    return ;
}

AMateria::~AMateria()
{
}