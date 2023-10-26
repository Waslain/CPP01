/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:01:45 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 11:14:13 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Crée un zombie, lui donne un nom et le fait se présenter.

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
