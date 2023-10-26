/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:58:38 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 21:48:29 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}

void Harl::debug(void)
{
	std::cout << std::endl;
	std::cout << MAG << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !";
	std::cout << std::endl << RESET;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << std::endl;
	std::cout << BLK << "INFO" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. " << std::endl;
	std::cout << "You didn’t put enough in my burger ! " << std::endl;
	std::cout << "If you did, I would not have to ask for it!" << std::endl << RESET;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << std::endl;
	std::cout << YEL << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years whereas you started working here last month." << std::endl << RESET;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << std::endl;
	std::cout << RED << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl << RESET;
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complain_func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complain_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complain_level[i] == level)
		{
			(this->*complain_func[i])();
			return ;
		}
	}
}