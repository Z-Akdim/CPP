#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    srand(time(NULL));
    int random = rand() % 3;

    if (random == 0)
        return (new A());
    else if (random == 1)
        return (new B());
    else if (random == 2)
        return (new C());
    else
        return (nullptr);
}

void identify(Base* p)
{
    A *ptr_a = dynamic_cast<A*>(p);
    if (ptr_a == NULL)
        std::cout << "Failure Casting to A!" << std::endl;
    else
        std::cout << "A" << std::endl;
    B *ptr_b = dynamic_cast<B*>(p);
    if (ptr_b == NULL)
        std::cout << "Failure Casting to B!" << std::endl;
    else
        std::cout << "B" << std::endl;
    C *ptr_c = dynamic_cast<C*>(p);
    if (ptr_c == NULL)
        std::cout << "Failure Casting to C!" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        static_cast<void>(a);
        std::cout << "A" << std::endl;
    }

    catch(std::exception e)
    {
        std::cerr << "Bad Cast to A!" << '\n';
    }

    try
    {
        B& b = dynamic_cast<B&>(p);
        static_cast<void>(b);
        std::cout << "B" << std::endl;
    }

    catch(std::exception e)
    {
        std::cerr << "Bad Cast to B!" << '\n';
    }

    try
    {
        C& c = dynamic_cast<C&>(p);
        static_cast<void>(c);
        std::cout << "C" << std::endl;
    }
    
    catch(std::exception e)
    {
        std::cerr << "Bad Cast to C!" << '\n';
    }
}

int main()
{
    Base *p = generate();
    identify(p);
    identify(*p);
    delete p;
    return (0);
}