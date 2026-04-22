/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:19:33 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 11:12:53 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Animal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"

int main() {
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	Dog fred;
	Dog *paul = new Dog();
	Dog *jack = new Dog(*paul);
	fred.addIdea("Manger des croquettes", 0);
	Cat lilou;
	lilou.addIdea("Detruire le canape", 0);
	lilou.printIdeas();
	fred.printIdeas();
	j->makeSound();

	Dog basic;
	Dog tmp = basic;


	delete j;
	delete jack;
	delete paul;
	delete i;
}
