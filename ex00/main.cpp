/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:00:44 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 11:17:32 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	std::cout << "Initialisation d'un zobie sur la stack" << std::endl;
	randomChump("Zombie sur la stack");
	std::cout << "Initialisation d'un zobie sur la heap" << std::endl;
	Zombie *zombie = newZombie("Zombie sur la heap");
	zombie->announce();
	delete zombie;
	return (0);
}
