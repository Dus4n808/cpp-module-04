/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:50:24 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 20:54:21 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Cure.hpp"
#include "../headers/ICharacter.hpp"

//Default constructor
Cure::Cure() : AMateria("cure") {}

//copy
Cure::Cure(const Cure & copy) : AMateria(copy) {}

//assign
Cure &Cure::operator=(const Cure & assign) {
	if (this != &assign)
		AMateria::operator=(assign);
	return *this;
}

//Destructor
Cure::~Cure() {}

//Methods

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::string name = target.getName();
	std::cout << "* heals " << name << "’s wounds *" << std::endl;
}
