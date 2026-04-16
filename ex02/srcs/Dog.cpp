/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:55:22 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 11:52:04 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Dog.hpp"

//Default
Dog::Dog() : AAnimal() {
	std::cout << "Default constructor Dog called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

//copy
Dog::Dog(const Dog &copy) : AAnimal(copy) {
	std::cout << "Copy Dog called" << std::endl;
	_brain = new Brain(*(copy._brain));
}

//assign
Dog &Dog::operator=(const Dog &assign) {
	std::cout << "Operator Dog called" << std::endl;
	if (this != &assign) {
		AAnimal::operator=(assign);
		if (_brain)
			delete _brain;
		_brain = new Brain(*(assign._brain));
	}
	return *this;
}

//Destructor
Dog::~Dog() {
	std::cout << "Destructor Dog called" << std::endl;
	delete _brain;
}

//methods
void Dog::makeSound(void) const {
	std::cout << "Wooooouuuuufffffff !!!!" << std::endl;
}

void Dog::printIdeas(void) const {
	for (int i = 0; i < 100; ++i) {
		std::string idea = _brain->getIdea(i);
		if (!idea.empty())
			std::cout << idea << " index : " << i << std::endl;
	}
}

void Dog::addIdea(const std::string &idea, int index) {
	if (index < 100)
		_brain->setIdea(idea, index);
	else
		std::cout << "Index max : 100" << std::endl;
}
