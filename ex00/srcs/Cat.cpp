/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:31:50 by dufama            #+#    #+#             */
/*   Updated: 2026/04/13 16:46:37 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"


//Default
Cat::Cat() : Animal() {
	std::cout << "Default constructor Cat called" << std::endl;
	_type = "Cat";
}

//copy
Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Copy Cat called" << std::endl;
}

//assign
Cat &Cat::operator=(const Cat &assign) {
	std::cout << "Operator Cat called" << std::endl;
	if (this != &assign) {
		Animal::operator=(assign);
	}
	return *this;
}

//Destructor
Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
}

//Methods
void Cat::makeSound(void) const {
	std::cout << "Meeeeooooowwwwwwwwwwww !!!!!" << std::endl;
}

