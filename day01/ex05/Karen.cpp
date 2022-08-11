/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 12:21:35 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/01 12:21:35 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug(void)
{
	std::cout << "[ DEBUG ]\n" <<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;	
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]\n" << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;	
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]\n" << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;	
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]\n" << "This is unacceptable, I want to speak to the manager now." << std::endl;	
}

Karen::Karen(void)
{
	return ;
}

Karen::~Karen()
{
	return ;
}

int		levelVsIndex(std::string level)
{
	int i;

	i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (i < 4 && (levels[i] != level))
		i++;
	return (i);	
}

void	Karen::problem(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;	
}

void	Karen::complain( std::string level )
{
	int n;

	n = levelVsIndex(level);
	void (Karen::*pmf[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::problem};
	(this->*(pmf[n]))();
}