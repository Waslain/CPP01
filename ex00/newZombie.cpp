/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:01:30 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 11:14:09 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Crée un zombie, lui donne un nom et le retourne afin qu’il puisse être utilisé en dehors de la portée de la fonction.

Zombie* newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
