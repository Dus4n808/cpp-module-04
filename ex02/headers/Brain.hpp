/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:00:27 by dufama            #+#    #+#             */
/*   Updated: 2026/04/22 13:49:24 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "../headers/AAnimal.hpp"

class Brain {
	private:
		std::string *_ideas;
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &assign);
		~Brain();
		void setIdea(const std::string &idea, int index);
		std::string getIdea(int index) const;
};

#endif
