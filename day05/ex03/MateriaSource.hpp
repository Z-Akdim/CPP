#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *arr_materia[4];
    int index_of_materia;
public:
    MateriaSource();
    MateriaSource(const MateriaSource &);
    MateriaSource &operator= (const MateriaSource &);
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};

#endif