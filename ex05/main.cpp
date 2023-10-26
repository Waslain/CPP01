/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:35 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 21:17:01 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/*
	Programme 
*/

int main()
{
	Harl harl;
	while (1)
	{
		std::cout << "Enter a complain level (DEBUG, INFO, WARNING, ERROR): " << std::endl;
		std::string level;
		std::getline(std::cin, level);
		harl.complain(level);
	}
	return (0);
}