/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:59:59 by dufama            #+#    #+#             */
/*   Updated: 2026/04/13 16:53:10 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AAnimal.hpp"

//default
AAnimal::AAnimal() : _type("AAnimal") {
	std::cout << "Default constructor AAnimal called" << std::endl;
}

//copy
AAnimal::AAnimal(const AAnimal &copy) : _type(copy._type) {
	std::cout << "AAnimal copy called" << std::endl;
}

//assign
AAnimal &AAnimal::operator=(const AAnimal &assign) {
	std::cout << "Assignement  AAnimal called" << std::endl;
	if (this != &assign) {
		_type = assign._type;
	}
	return *this;
}

//Destructor
AAnimal::~AAnimal() {
	std::cout << "Destructor AAnimal called" << std::endl;
}

//methods

void AAnimal::makeSound(void) const {
	std::cout << "AAnimal Sound" << std::endl;
}


void AAnimal::getType(void) const {
	std::cout << _type << std::endl;
}
