/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:00:27 by dufama            #+#    #+#             */
/*   Updated: 2026/04/15 18:20:21 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "../headers/Animal.hpp"

class Brain {
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &assign);
		~Brain();

};

#endif
