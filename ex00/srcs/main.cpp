/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:33 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 10:59:53 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"

int main() {

	const Animal *lucas = new Animal();
	const Animal *juliette = new Cat();
	const Animal *fred = new Dog();
	const WrongAnimal *lol = new WrongCat();

	lucas->getType();
	lucas->makeSound();

	juliette->getType();
	juliette->makeSound();

	fred->getType();
	fred->makeSound();

	//no virtual sound of WrongAnimal not WrongCat
	lol->makeSound();

	delete fred;
	delete lucas;
	delete juliette;
	delete lol;
}
