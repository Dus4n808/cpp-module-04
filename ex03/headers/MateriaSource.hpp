/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 18:10:33 by dufama            #+#    #+#             */
/*   Updated: 2026/04/18 18:17:45 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "../headers/IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _template[4];
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		MateriaSource& operator=(const MateriaSource& assign);
		virtual ~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const &type);
};

#endif
