/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 20:16:06 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 20:46:44 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Character.hpp"

//Default
Character::Character(std::string const &name) : _name(name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

//copy
Character::Character(const Character & copy) : _name(copy._name) {
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i] != NULL)
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
	}
}

//assign
Character& Character::operator=(const Character & assign) {
	if (this != &assign) {
		_name = assign._name;
		for (int i = 0; i < 4; i++) {
			if (_inventory[i] != NULL)
				delete _inventory[i];
			if (assign._inventory[i] != NULL)
				_inventory[i] = assign._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return *this;
}

//Destructor
Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}


//Methods
std::string const & Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (_inventory[i] == NULL)
			_inventory[i] = m;
		break;
	}
}

void Character::unequip(int idx) {
	if (idx > 3 || idx < 0)
		return ;
	if (_inventory[idx] != NULL)
		_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx > 3 || idx < 0)
		return ;
	if (_inventory[idx] != NULL)
		_inventory[idx]->use(target);
}
