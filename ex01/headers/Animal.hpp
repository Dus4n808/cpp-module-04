/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:50:07 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 13:39:55 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &assign);
		virtual ~Animal();
		virtual void makeSound(void) const;
		void getType(void) const;
};



#endif
