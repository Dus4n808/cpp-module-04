/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:59:59 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 13:39:58 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"

//default
Animal::Animal() : _type("Animal") {
	std::cout << "Default constructor Animal called" << std::endl;
}

//copy
Animal::Animal(const Animal &copy) : _type(copy._type) {
	std::cout << "Animal copy called" << std::endl;
}

//assign
Animal &Animal::operator=(const Animal &assign) {
	std::cout << "Assignement  Animal called" << std::endl;
	if (this != &assign) {
		_type = assign._type;
	}
	return *this;
}

//Destructor
Animal::~Animal() {
	std::cout << "Destructor Animal called" << std::endl;
}

//methods

void Animal::makeSound(void) const {
	std::cout << "Animal Sound" << std::endl;
}


void Animal::getType(void) const {
	std::cout << _type << std::endl;
}
