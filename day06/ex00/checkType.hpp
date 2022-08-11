#ifndef CHECKTYPE_HPP
#define CHECKTYPE_HPP

#include <string>
#include <iostream>

int check_int(std::string);
int check_double(std::string);
int check_float(std::string);

bool    is_scientific(std::string);
bool    is_scientific_f(std::string);

#endif