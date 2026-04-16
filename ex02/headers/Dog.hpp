/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:49:31 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 11:51:20 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "../headers/AAnimal.hpp"
#include "../headers/Brain.hpp"

class Dog: public AAnimal {
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &assign);
		virtual ~Dog();
		void makeSound(void) const;
		void printIdeas(void) const;
		void addIdea(const std::string &idea, int index);
};

#endif
