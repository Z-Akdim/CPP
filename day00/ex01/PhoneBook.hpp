/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 17:11:10 by zakdim            #+#    #+#             */
/*   Updated: 2021/08/29 15:19:49 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include <sstream>
# include <iostream>
# include <iomanip>
# include <unistd.h>
# include "Contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook
{
	private:
        Contact contacts[MAX_CONTACTS];
        int index;
    public:
        PhoneBook();
        ~PhoneBook();
        int     preview(void);
        void	search(void);
        PhoneBook         add(void);  
};
void    welcome_phone();
void    choice();
#endif
