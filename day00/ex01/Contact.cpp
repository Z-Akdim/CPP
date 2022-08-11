/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 11:32:01 by zakdim            #+#    #+#             */
/*   Updated: 2021/08/29 10:45:27 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string     Contact::getFirst()
{
    return (first_name);
}

std::string     Contact::getLast()
{
    return (last_name);
}

std::string     Contact::getNickname()
{
    return (nickname);
}

Contact         Contact::modify()
{
    std::cout << "first_name : ";
    hundle_getline(first_name);
    std::cout << "last_name : ";
    hundle_getline(last_name);
    std::cout << "nickname : ";
    hundle_getline(nickname);
    std::cout << "phone : ";
    hundle_getline(phone);
    std::cout << "darkest_secret : ";
    hundle_getline(darkest_secret);
    return (*this);
}

std::string			Contact::toString()
{
	return (
		" ——————————————————————————————————————————\n"
		"| First Name     | " + first_name         +  "\n"
		"———————————————————————————————————————————\n"
		"| Last Name      | " + last_name           + "\n"
		"———————————————————————————————————————————\n"
		"| Nickname       | " + nickname       +      "\n"
		"———————————————————————————————————————————\n"
		"| Phone          | " + phone          +      "\n"
		"———————————————————————————————————————————\n"
		"PS -- Darkest Secret : "
		 + darkest_secret +"\n"
	);
}
