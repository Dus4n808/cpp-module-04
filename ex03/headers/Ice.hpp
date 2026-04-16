/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 19:05:32 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 20:53:38 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "../headers/AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice & copy);
		Ice &operator=(const Ice & assign);
		virtual ~Ice();


		virtual AMateria *clone() const;
		virtual void use(ICharacter& target);
};

#endif
