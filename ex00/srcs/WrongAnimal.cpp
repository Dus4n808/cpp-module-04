/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:26:33 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 10:32:16 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong Animal") {
	std::cout << "Default constructor Wrong Animal Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type(copy._type) {
	std::cout << "Copy constructor Wrong Animal called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& assign) {
	if (this != &assign)
		_type = assign._type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor Wrong Animal Called" << std::endl;
}

//Methods
void WrongAnimal::makeSound(void) const {
	std::cout << "Wrong Animal sound" << std::endl;
}



