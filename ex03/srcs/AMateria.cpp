/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:17:52 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 19:30:34 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/AMateria.hpp"

//Default constructor
AMateria::AMateria(std::string const &type) : _type(type) {}

//copy
AMateria::AMateria(const AMateria &copy) : _type(copy._type) {}

//Assing
AMateria &AMateria::operator=(const AMateria &assign) {
	(void)assign;
	return *this;
}

//Destructor
AMateria::~AMateria() {}

//Methode
std::string const & AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
}
