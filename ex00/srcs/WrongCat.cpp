/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:32:37 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 10:55:44 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "Default constructor Wrong Cat called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
	std::cout << "Copy Wrong Cat called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& assign) {
	std::cout << "Assign constructor Wrong Cat called" << std::endl;
	if (this != &assign)
		WrongAnimal::operator=(assign);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "Destructor WrongCat called" << std::endl;
}

//Methods

void WrongCat::makeSound(void) const {
	std::cout << "WrongCat miaouu" << std::endl;
}



