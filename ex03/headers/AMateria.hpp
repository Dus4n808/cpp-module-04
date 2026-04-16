/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:03:22 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 12:05:57 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria {
	protected:
		//to add
	public:
		AMateria(std::string const &type);
		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use()
}

#endif
