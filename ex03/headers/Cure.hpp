/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:12:47 by dufama            #+#    #+#             */
/*   Updated: 2026/04/18 17:57:14 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "../headers/AMateria.hpp"

class ICharacter;

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure & copy);
		Cure &operator=(const Cure & assign);
		virtual ~Cure();

		virtual AMateria *clone() const;
		virtual void use(ICharacter& target);
};

#endif
