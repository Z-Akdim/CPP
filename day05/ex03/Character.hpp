#ifndef CHARACTER_H
#define CHARACTER_H

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        int index_of_materia;
        AMateria *arr_materia[4];
    public:
        Character();
        Character(std::string);
        Character(const Character &);
        Character &operator=(const Character &);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        ~Character();
};


#endif