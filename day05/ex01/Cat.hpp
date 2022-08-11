#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brn;
public:
    Cat();
    Cat(const Cat &);
    Cat &operator= (const Cat &);
    void    makeSound(void) const;
    void    print_brain(const Cat &);
    virtual ~Cat();
};


#endif