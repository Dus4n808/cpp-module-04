/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:33 by dufama            #+#    #+#             */
/*   Updated: 2026/04/13 16:56:09 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"

int main() {

	const Animal *lucas = new Animal();
	const Animal *juliette = new Cat();
	const Animal *fred = new Dog();

	lucas->getType();
	lucas->makeSound();

	juliette->getType();
	juliette->makeSound();

	fred->getType();
	fred->makeSound();

	delete fred;
	delete lucas;
	delete juliette;
}
