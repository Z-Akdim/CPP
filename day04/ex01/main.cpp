#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // int nbr = 10;
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();

    // std::cout << i->getType() << std::endl;
    // Animal *ptr[nbr];

    // for(int i = 0; i <= nbr; i++)
    // {
    //     if ((i) < (nbr / 2))
    //     {
    //         ptr[i] = new Dog();
    //         std::cout << "dog===>" << i << std::endl;
    //     }
    //     else
    //     {
    //         ptr[i] = new Cat();
    //         std::cout << "cat===>" << i << std::endl;
    //     }
    // }

    // for (int i = 0; i < nbr; i++)
    // {
    //     delete ptr[i];
    // }
 
    std::cout << "------------------------------------" << std::endl;
    Cat c1;
    Cat c2 = c1;
    c1.print_brain(c1);
    c2.print_brain(c2);
    std::cout << "------------------------------------" << std::endl;
    Dog d1;
    Dog d2(d1);
    d1.print_brain(d1);
    d2.print_brain(d2);
    // std::cout << "------------------------------------" << std::endl;

    // delete j;
    // delete i;
}