/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:52:23 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 11:17:07 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void) const;
	private:
		std::string	_name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif