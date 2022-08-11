/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:13:36 by zakdim            #+#    #+#             */
/*   Updated: 2021/08/29 15:20:00 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	
}

void    welcome_phone()
{
    std::cout << "\n \033[1;34mWelcome to the Phonebook App \033[1;0m\n" << std::endl;
}

void    choice()
{
    std::cout << "\033[1;35mchoice ADD     : \033[1;0m" << "\033[1;36mif you want to add new phonebook\033[1;0m" << std::endl;
    std::cout <<"\033[1;35mchoice SEARCH  : \033[1;0m" << "\033[1;36mif you want to search for a phonebook\033[1;0m" << std::endl;
    std::cout <<"\033[1;35mchoice EXIT    : \033[1;0m" << "\033[1;36mif you want to exit program\033[1;0m" << std::endl;
    std::cout << std::endl;
    std::cout << "Entre your command" << std::endl;
}

PhoneBook         PhoneBook::add()
{
    contacts[index % 8].modify();
    index = index + 1;
    std::cout << "\n Contact Successfully Added." << std::endl;
    return *this;
}

int             PhoneBook::preview(void)
{
   std::string first_name;
   std::string last_name;
   std::string nickname;
   int i;
   int count;

   i = 0;
   count = 8;
   if (index == 0)
   {
       std::cout << "\033[1;33mNO contacte, Please (add) a new contacte (^_^)\033[1;0m" << std::endl;
       return (-1);
   }
    std::cout << "|" \
        << std::setw(10) << "index" << "|"  \
	    << std::setw(10) << "first_name" << "|"  \
	    << std::setw(10) << "last_name" << "|"  \
	    << std::setw(10) << "nickname" << "|"   \
	    << std::endl;
    std::cout << std::endl;
    if (index < 8)
        count = index;
   while (i < count)
   {
       	first_name = contacts[i].getFirst();
		last_name  = contacts[i].getLast();
		nickname   = contacts[i].getNickname();
        if (first_name.length() > 10)
        {
            first_name[9] = '.';
            first_name[10] = '\0';
        }
        
        if (last_name.length() > 10)
        {
            last_name[9] = '.';
            last_name[10] = '\0';
        }
        
        if (nickname.length() > 10)
        {
            nickname[9] = '.';
            nickname[10] = '\0';
        }
        std::cout << "|" 
                  << std::setw(10) << i << "|"  
			      << std::setw(10) << first_name.c_str()  << "|"  
			      << std::setw(10) << last_name.c_str()  << "|"  
			      << std::setw(10) << nickname.c_str() << "|"   
			      << std::endl;
       i++;
   }
   return (0);
}

int in_range(int k, int i)
{
    int m;

    m = 0;
    if (k < 0 || k >= 8)
        return (0);
    while (m < i)
    {
        if (k != m)
            m++;
        else
            return (1);
    }
    return (0);
}

void			PhoneBook::search(void)
{
    std::string input;
    int indx;

	if (this->preview() == -1)
		return ;
	std::cout << std::endl;
    std::cout << "Enter an Index for more Details: ";
    std::getline(std::cin, input);
    while (input.length() > 1 || input.length() == 0 || !isdigit(input[0]))
    {
        std::cout << "\033[1;31mError: Enter Integer from 0 to 7(no space or alphabet)!\033[1;0m" << std::endl;
        std::cout << "\033[1;32mPlead Enter a valid index: \033[1;0m";
        std::getline(std::cin, input);
    }
    while(isdigit(input[0]))
    {
        indx = atoi(input.c_str());
        std::cout << std::endl;
        if (in_range(stoi(input), index) == 0){
            std::cout << "\033[1;33m" << "\t\tIndex Not Found!" << "\033[1;0m" << std::endl;
            std::cout << "\033[1;32mPlead Enter a valid index: \033[1;0m";
            std::getline(std::cin, input);
        }
        else
        {
            std::cout << contacts[indx].toString() << std::endl;
            break;
        }
    }
}