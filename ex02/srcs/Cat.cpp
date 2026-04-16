/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:31:50 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 11:51:52 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cat.hpp"


//Default
Cat::Cat() : AAnimal() {
	std::cout << "Default constructor Cat called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

//copy
Cat::Cat(const Cat &copy) : AAnimal(copy) {
	std::cout << "Copy Cat called" << std::endl;
	_brain = new Brain(*(copy._brain));
}

//assign
Cat &Cat::operator=(const Cat &assign) {
	std::cout << "Operator Cat called" << std::endl;
	if (this != &assign) {
		AAnimal::operator=(assign);
		if (_brain)
			delete _brain;
		_brain = new Brain(*(assign._brain));
	}
	return *this;
}

//Destructor
Cat::~Cat() {
	std::cout << "Destructor Cat called" << std::endl;
	delete _brain;
}

//Methods
void Cat::makeSound(void) const {
	std::cout << "Meeeeooooowwwwwwwwwwww !!!!!" << std::endl;
}

void Cat::printIdeas(void) const {
	for (int i = 0; i < 100; ++i) {
		std::string idea = _brain->getIdea(i);
		if (!idea.empty())
			std::cout << idea << " index : " << i << std::endl;
	}
}

void Cat::addIdea(const std::string &idea, int index) {
	if (index < 100)
		_brain->setIdea(idea, index);
	else
		std::cout << "Index max : 100" << std::endl;
}
