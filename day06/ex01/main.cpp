#include "Serialization.hpp"

int main()
{
    Data *d = new Data;
    d->str1 = "hello";
    d->nb = 1337;
    std::cout << d << "\t" << d->str1 + ", " << d->nb << std::endl;

    std::cout << "Call Function Serialize()" << std::endl;
    uintptr_t ui = serialize(d);
    std::cout << &ui << "\t" << ui << std::endl;

    std::cout << "Call Function Deserialize()" << std::endl;
    d = deserialize(ui);
    std::cout << d << "\t" << d->str1 + ", " << d->nb<< std::endl;
    
    delete d;
}