/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:15:26 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 20:54:04 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Ice.hpp"
#include "../headers/ICharacter.hpp"

//Default constructor
Ice::Ice() : AMateria("ice") {}

//copy
Ice::Ice(const Ice & copy) : AMateria(copy) {}

//assign
Ice &Ice::operator=(const Ice & assign) {
	if (this != &assign)
		AMateria::operator=(assign);
	return *this;
}

//Destructor
Ice::~Ice() {}

//methods
AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::string name = target.getName();
	std::cout << "* shoots an ice bolt at " << name << " *" << std::endl;
}


