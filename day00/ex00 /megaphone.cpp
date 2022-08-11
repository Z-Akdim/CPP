/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:43:16 by zakdim            #+#    #+#             */
/*   Updated: 2021/07/02 11:53:24 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    if (ac > 1)
    {
       while (av[i])
        {
            j = 0;
            while (av[i][j])
                putchar(toupper(av[i][j++]));
            i++;
            std::cout << " ";
        }
       std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    return (0);
}