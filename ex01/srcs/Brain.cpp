/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:19:21 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 13:01:00 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Brain.hpp"

//Default
Brain::Brain() {
	std::cout << "Default constructor Brain called" << std::endl;
	_ideas = new std::string[100];
}

//copy
Brain::Brain(const Brain &copy) {
	std::cout << "Copy constructor Brain called" << std::endl;
	_ideas = new std::string[100];
	for (int i = 0; i < 100; ++i)
		_ideas[i] = copy._ideas[i];
}

//assgin
Brain &Brain::operator=(const Brain &assign) {
	std::cout << "Assign operator Brain called" << std::endl;
	if (this != &assign) {
		for (int i = 0; i < 100; ++i)
			_ideas[i] = assign._ideas[i];
	}
	return *this;
}

//Destructor
Brain::~Brain() {
	std::cout << "Destructor Brain called" << std::endl;
	delete[] _ideas;
}

//Methods
void Brain::setIdea(const std::string &idea, int index) {
	_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	return _ideas[index];
}




