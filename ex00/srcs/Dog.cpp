/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:55:22 by dufama            #+#    #+#             */
/*   Updated: 2026/04/13 16:46:46 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

//Default
Dog::Dog() : Animal() {
	std::cout << "Default constructor Dog called" << std::endl;
	_type = "Dog";
}

//copy
Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Copy Dog called" << std::endl;
}

//assign
Dog &Dog::operator=(const Dog &assign) {
	std::cout << "Operator Dog called" << std::endl;
	if (this != &assign) {
		Animal::operator=(assign);
	}
	return *this;
}

//Destructor
Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "Wooooouuuuufffffff !!!!" << std::endl;
}
