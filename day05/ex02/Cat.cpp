#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constructor Default the Cat is Called!" << std::endl;
    this->type = "Cat";
    brn = new Brain();
}

void    Cat::makeSound() const
{
    std::cout << "Cat makeSound Called!" << std::endl;
}

Cat::Cat(const Cat &new_cat)
{
    std::cout << "Constructor Copy the Cat is Called!" << std::endl;
    (void)new_cat;
    this->brn = new Brain();
}

Cat &Cat::operator=(const Cat &new_cat)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    if (this != &new_cat)
        *brn = *(new_cat.brn);
    return (*this);
}

void    Cat::print_brain(const Cat &cat)
{
    std::cout << cat.brn << std::endl;
}

Cat::~Cat()
{
    delete brn;
    std::cout << "destructor the Cat is Called!" << std::endl;
}