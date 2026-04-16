/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:53:18 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 10:47:19 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../headers/Animal.hpp"
#include "../headers/Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &assign);
		~Cat();
		void makeSound(void) const;
		void printIdeas(void) const;
		void addIdea(const std::string &idea, int index);
};

#endif
