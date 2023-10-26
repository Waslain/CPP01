/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:25:39 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 13:30:19 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack(void) const;
	private:
		std::string	_name;
		Weapon		&_weapon;
};

#endif