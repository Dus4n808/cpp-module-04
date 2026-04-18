/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:03:22 by dufama            #+#    #+#             */
/*   Updated: 2026/04/18 17:56:59 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria & operator=(const AMateria &assing);
		virtual ~AMateria();

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif
