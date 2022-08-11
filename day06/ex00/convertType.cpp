#include "convertType.hpp"

void    convert_int(std::string str)
{
    int nb_i;
    int i = 0;
    std::cout << "int: ";
    if (is_scientific(str) || is_scientific_f(str))
        std::cout << "impossible" << std::endl;
    else if (check_int(str) || check_float(str) || check_double(str))
    {
        nb_i = atoi(str.c_str());
        std::cout << nb_i << std::endl;
    }
    else if (str.length() == 1 && !std::isdigit(str[i]))
        std::cout << static_cast<int>(str[0])<< std::endl;
    else
        std::cout << "Error: argument invalide" << std::endl;
}

void    convert_float(std::string str)
{
    std::cout << "float: ";
    double nb_f;
    int res;
    int i = 0;
    if (is_scientific(str))
        std::cout << str << "f" << std::endl;
    else if (is_scientific_f(str))
        std::cout << str << std::endl;
    else if (check_float(str))
    {
        nb_f = (atof(str.c_str()));
        res = (nb_f * 10);
        if ((res % 10) == 0)
            std::cout << static_cast<float>(nb_f) << ".0f" << std::endl;
        else
            std::cout << static_cast<float>(nb_f) << "f" << std::endl;
    }
    else if (check_int(str))
    {
        nb_f = atof(str.c_str());
        std::cout << static_cast<float>(nb_f) << ".0f" << std::endl;
    }
    else if (check_double(str))
    {
        nb_f = atof(str.c_str());
        res = (nb_f * 10);
        if ((res % 10) == 0)
            std::cout << nb_f << ".0f" << std::endl;
        else
            std::cout << nb_f << "f" << std::endl;
    }
    else if (str.length() == 1 && !std::isdigit(str[i]))
        std::cout << static_cast<float>(str[0]) << ".0f" << std::endl;
    else
        std::cout << "Error: argument invalide" << std::endl;

}

void    convert_double(std::string str)
{
    std::cout << "double: ";
    double nb_f;
    int i = 0;
    if (is_scientific(str))
        std::cout << str << std::endl;
    else if (is_scientific_f(str))
        std::cout << str.substr(0, str.length() - 1) << std::endl;
    else if (check_int(str))
    {
        nb_f = atof(str.c_str());
        std::cout << nb_f << ".0" << std::endl;
    }
    else if (check_float(str) || check_double(str))
    {
        int res;
        nb_f = atof(str.c_str());
        res = (nb_f * 10);
        if ((res % 10) == 0)
            std::cout << nb_f << ".0" << std::endl;
        else
            std::cout << nb_f << std::endl;
    }
    else if (str.length() == 1 && !std::isdigit(str[i]))
        std::cout << static_cast<double>(str[0]) << ".0" << std::endl;
    else
        std::cout << "Error: argument invalide" << std::endl;

}

void    convert_char(std::string str)
{
    int nb = 0;
    if (str.length() > 1 && !isdigit(str[0]))
    {
         if (is_scientific(str) || is_scientific_f(str))
         {
            std::cout << "char: impossible" << std::endl;
            return ;
         }
        std::cout << "ERROR: argument Invalid!" << std::endl;
        return ;
    }
    std::cout << "char: ";
    if (str.size() == 1 && !isdigit(str[0]))
        std::cout << "'" << static_cast<char>(str[0]) << "'" << std::endl;
    else
    {
        if (check_int(str) || check_float(str) || check_double(str))
            nb = atoi(str.c_str());
        if (isprint(nb))
            std::cout << "'" << static_cast<char>(nb) << "'" << std::endl;
        if (nb < 32 || nb >= 127)
            std::cout << "Non displayable" << std::endl;
    }

}