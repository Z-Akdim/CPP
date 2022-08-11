/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:22:03 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/01 12:22:03 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main(int ac, char **av)
{
    std::string level;
    Karen karen_sys;
    (void)av;
    if (ac != 2)
    {
        std::cout << "Error Arguments" << std::endl;
        return (0);
    }
    level = av[1];
    karen_sys.complain(level);
    return (0);
}