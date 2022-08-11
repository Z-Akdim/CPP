#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template <typename T>
class Array{
    private:
        T *arry;
        unsigned int _n; 
    public:
        Array(): arry(new T[0]), _n(0) {};
        Array<T>(unsigned int n) : arry(new T[n]), _n(n) {};
        Array<T>(Array const &new_cop)
        {
            *this = new_cop;
        };
        Array<T> &operator=(Array const &new_cop)
        {
            if (this != &new_cop)
            {
               this->_n = new_cop._n;
               this->arry = new T[new_cop._n];
               for (unsigned int i = 0; i < this->_n; i++)
                {
                   this->arry[i] = new_cop.arry[i];
                }
            }
            return (*this);
        };
        T &operator[](int n)
        {
             if (n >= 0 && n < this->_n)
                return this->arry[n];
             else
                throw outOflimit();
        };

        size_t size()
        {
            return this->_n;
        };

        class outOflimit : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return "this element is out of the limits!";
                }
        };


        ~Array()
        {
            delete [] arry;
        }
};



#endif