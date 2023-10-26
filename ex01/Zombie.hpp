/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:52:23 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 11:38:40 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void	announce(void) const;
		void	setName(std::string name);
	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif