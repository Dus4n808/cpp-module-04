/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 18:19:21 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 11:32:44 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Brain.hpp"

//Default
Brain::Brain() {
	std::cout << "Default constructor Brain called" << std::endl;
	ideas = new std::string[100];
}

//copy
Brain::Brain(const Brain &copy) {
	std::cout << "Copy constructor Brain called" << std::endl;
	ideas = new std::string[100];
	for (int i = 0; i < 100; ++i)
		ideas[i] = copy.ideas[i];
}

//assgin
Brain &Brain::operator=(const Brain &assign) {
	std::cout << "Assign operator Brain called" << std::endl;
	if (this != &assign) {
		for (int i = 0; i < 100; ++i)
			ideas[i] = assign.ideas[i];
	}
	return *this;
}

//Destructor
Brain::~Brain() {
	std::cout << "Destructor Brain called" << std::endl;
	delete[] ideas;
}

//Methods
void Brain::setIdea(const std::string &idea, int index) {
	ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
	return ideas[index];
}




