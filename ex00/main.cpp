/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:00:44 by fduzant           #+#    #+#             */
/*   Updated: 2024/01/18 16:49:00 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	randomChump("Zombie sur la stack");
	Zombie *zombie = newZombie("Zombie sur la heap");
	zombie->announce();
	delete zombie;
	return (0);
}
