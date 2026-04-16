/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:50:07 by dufama            #+#    #+#             */
/*   Updated: 2026/04/16 11:50:04 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal {
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal &operator=(const AAnimal &assign);
		virtual ~AAnimal();
		virtual void makeSound(void) const = 0;
		void getType(void) const;
};



#endif
