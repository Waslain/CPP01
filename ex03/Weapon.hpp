/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:07 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 13:30:05 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType() const;
		void		setType(std::string type);
	private:
		std::string	_type;
};

#endif