/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:33 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 13:47:14 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"

int main() {
	const Animal *j = new Cat();
	const Animal *y = new Dog();

	Dog *leo = new Dog();

	leo->addIdea("Manger", 2);
	leo->printIdeas();

	delete leo;
	delete j;
	delete y;
}
