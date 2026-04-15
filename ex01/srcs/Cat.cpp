/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:31:50 by dufama            #+#    #+#             */
/*   Updated: 2026/04/15 18:40:30 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"


//Default
Cat::Cat() : Animal() {
	std::cout << "Default constructor Cat called" << std::endl;
	_type = "Cat";
	_b = new Brain();
}

//copy
Cat::Cat(const Cat &copy) : Animal(copy) {
	std::cout << "Copy Cat called" << std::endl;
	_b = new Brain(*(copy._b));
}

//assign
Cat &Cat::operator=(const Cat &assign) {
	std::cout << "Operator Cat called" << std::endl;
	if (this != &assign) {
		Animal::operator=(assign);
		if (_b)
			delete _b;
		_b = new Brain(*(assign._b));
	}
	return *this;
}

//Destructor
Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
	delete _b;
}

//Methods
void Cat::makeSound(void) const {
	std::cout << "Meeeeooooowwwwwwwwwwww !!!!!" << std::endl;
}

