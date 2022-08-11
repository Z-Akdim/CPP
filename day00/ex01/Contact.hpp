/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:04:10 by zakdim            #+#    #+#             */
/*   Updated: 2021/08/29 15:17:25 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact{

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string darkest_secret;
		std::string	phone;
		
	public:
		std::string     getFirst();
		std::string     getLast();
		std::string     getNickname();
		std::string		toString();
		Contact         modify();
};
std::string 	hundle_getline(std::string &str);

#endif