/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 14:04:54 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/06 11:58:50 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int N;

    N = 8;
	if (N <= 0)
	{
		std::cout << "Error : you should add number greater than  0" << std::endl;
		return (0);
	}
	Zombie *Zomb = zombieHorde(N, "zombiehorde");
	delete[] Zomb;
	return (0);
}
