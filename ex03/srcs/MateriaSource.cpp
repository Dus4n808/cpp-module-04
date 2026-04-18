/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 18:08:37 by dufama            #+#    #+#             */
/*   Updated: 2026/04/18 18:45:53 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/MateriaSource.hpp"

//Default constructor
MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++) {
		_template[i] = NULL;
	}
}

//copy
MateriaSource::MateriaSource(const MateriaSource& copy) {
	for (int i = 0; i < 4; i++) {
		if (copy._template[i] != NULL)
			_template[i] = copy._template[i]->clone();
		else
			_template[i] = NULL;
	}
}

//assign
MateriaSource& MateriaSource::operator=(const MateriaSource& assign) {
	if (this != &assign) {
		for (int i = 0; i < 4; i++) {
			if (_template[i] != NULL)
				delete _template[i];
			if (assign._template[i] != NULL)
				_template[i] = assign._template[i]->clone();
			else
				_template[i] = NULL;
		}
	}
	return *this;
}

//Destructor
MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (_template[i] != NULL)
			delete _template[i];
	}
}

//Methods
void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (_template[i] == NULL) {
			_template[i] = m->clone();
			break;
		} else {
			std::cout << "Template full" << std::endl;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		if (_template[i] != NULL && _template[i]->getType() == type)
			return _template[i]->clone();
	}
	return 0;
}


