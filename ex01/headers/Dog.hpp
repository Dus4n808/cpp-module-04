/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:49:31 by dufama            #+#    #+#             */
/*   Updated: 2026/04/13 16:46:51 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "../headers/Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		Dog(const Dog &copy);
		Dog &operator=(const Dog &assign);
		~Dog();
		void makeSound(void) const;
};

#endif
