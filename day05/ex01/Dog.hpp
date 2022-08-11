#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brn;
public:
    Dog();
    Dog(const Dog &);
    Dog &operator= (const Dog &);
    void    makeSound(void) const;
    void    print_brain(const Dog &);
    virtual ~Dog();
};

#endif