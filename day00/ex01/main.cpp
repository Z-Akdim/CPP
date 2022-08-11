/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 09:35:14 by zakdim            #+#    #+#             */
/*   Updated: 2021/08/29 15:20:14 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string 		hundle_getline(std::string &str)
{
    if(!getline(std::cin, str))
    	exit(0);
	std::stringstream ss(str);
	str = "";
	std::string buffer;
	while (ss >> buffer)
	{
		str += buffer;
		if (!ss.eof())
			str += " ";
	}
	return str;
}

int main(void)
{
	std::string string;
	PhoneBook phonebook;
	Contact contact;

	welcome_phone();
	while (1)
	{
		choice();
		hundle_getline(string);
		std::cout<<std::endl;
		if (string != "ADD" && string != "SEARCH" && string != "EXIT")
		{
			std::cout<<"\033[1;31mError: the request you entered does not exist, Enter just(ADD, SEARCH OR EXIT), Please check the request\033[1;0m"<<std::endl;
			std::cout<<std::endl;
		}
		else if (string == "ADD")
			phonebook.add();
		else if(string == "SEARCH")
			phonebook.search();
		else if(string == "EXIT")
			exit (0);
	}
	return (0);
}
