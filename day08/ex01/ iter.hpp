#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template <typename T>
void    iter(T *arry, int lenght, void func(T const & element))
{
    int i = 0;
    while (i < lenght)
        func(arry[i++]);
}

template <typename T>
void    print_element(T const &elem)
{
    std::cout << elem << std::endl;
}

#endif