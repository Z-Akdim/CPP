/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:55:42 by zakdim            #+#    #+#             */
/*   Updated: 2021/10/07 16:17:21 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // const WrongAnimal* wa = new WrongCat();
    // const WrongCat* wc = new WrongCat();

    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    // wa->makeSound();
    // wc->makeSound();

    // delete wc;
    // delete wa;
    // delete i;
    delete j;
    delete meta;
}