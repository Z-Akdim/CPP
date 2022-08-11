#include "checkType.hpp"

int check_int(std::string str)
{
    if (is_scientific_f(str) || is_scientific(str))
        return (1);
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < static_cast<int>(str.length()))
    {
        if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int check_float(std::string str)
{
    if (is_scientific_f(str) || is_scientific(str))
        return (1);
    int i = 0;
    int num_simi = 0;
    if (str[str.length() - 1] != 'f')
        return (0);
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < (int)str.length())
    {
        if (str[i] == 'f')
            num_simi++;
        i++;
        if (num_simi > 1)
            return (0);
    }
    num_simi = 0;
    while (i < (int)str.length() - 1 )
    {
        if (str[i] == '.')
        {
            num_simi++;
            i++;
        }
        else if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    if (num_simi > 1)
        return (0);
    return (1);
}

int check_double(std::string str)
{
    if (is_scientific_f(str) || is_scientific(str))
        return (1);
    int i = 0;
    int num_simi = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (i < (int)str.length())
    {
        if (str[i] == '.')
        {
            num_simi++;
            i++;
        }
        else if (!std::isdigit(str[i]))
            return (0);
        i++;
    }
    if (num_simi > 1)
        return (0);
    return (1);
}

bool    is_scientific(std::string str)
{
    std::string science[4] = {"nan", "inf", "-inf", "+inf"};
    int n = 4;
    int i = 0;
    while (i < n)
    {
        if (science[i] ==str)
            return (true);
        i++;
    }
    return (false);
}

bool    is_scientific_f(std::string str)
{
    std::string science[4] = {"nanf", "inff", "-inff", "+inff"};
    int n = 4;
    int i = 0;
    while (i < n)
    {
        if (science[i] == str)
            return (true);
        i++;
    }
    return (false);
}

