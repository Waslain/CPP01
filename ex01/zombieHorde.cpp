/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:21:24 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 11:38:06 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//La fonction zombieHorde alloue N objets Zombie en une seule allocation. Ensuite,
//elle initialise les zombies en donnant à chacun le nom passé en paramètre.
//Elle retourne un pointeur sur le premier zombie du tableau.

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*horde = new Zombie[n];
	int i = 0;
	while (i < n)
	{
		horde[i].setName(name);
		i++;
	}	
	return (horde);
}
