/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:18:31 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/07 10:53:17 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR;
	stringPTR = &str;
    std::string &stringREF = str;

  	std::cout << "Adress memory of the string    : " << &str <<std::endl;
	std::cout << "Adress memory of the stringPTR : " << stringPTR <<std::endl;
	std::cout << "Adress memory of the stringREF : " << &stringREF <<std::endl;
	std::cout << "Pointer to str                 : " << *stringPTR <<  std::endl;
	std::cout << "Reference to str              : " << stringREF << std::endl;
}