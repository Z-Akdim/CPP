#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    this->index_of_materia = 0;
    for (int i = 0; i < 4; i++)
    {
        arr_materia[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy_mc)
{
    *this = copy_mc;
}

MateriaSource &MateriaSource::operator= (const MateriaSource &new_mc)
{
    if (this != &new_mc)
    {
        for (int i = 0; i < 4; i++)
        {
            arr_materia[i] = NULL;
            arr_materia[i] = new_mc.arr_materia[i]->clone();
        }
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria* m)
{
    if (index_of_materia < 4 && arr_materia[index_of_materia] == NULL)
    {
        arr_materia[index_of_materia] = m;
        index_of_materia++;
    }
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < this->index_of_materia; i++)
    {
        if (arr_materia[i] != NULL)
        {
            if (arr_materia[i]->getType() == type)
                return (arr_materia[i]->clone());
        }
    }
    return (NULL);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (arr_materia[i] != NULL)
            delete arr_materia[i];
    }
    
}