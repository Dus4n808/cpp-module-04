/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:53:18 by dufama            #+#    #+#             */
/*   Updated: 2026/04/01 16:58:57 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../headers/Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat &copy);
		Cat &operator=(const Cat &assign);
		~Cat();
};

#endif
