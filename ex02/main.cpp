/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:00:44 by fduzant           #+#    #+#             */
/*   Updated: 2024/01/25 15:21:50 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//Programme comportant une variable brain de type string init à "HI THIS IS BRAIN"
//et une variable stringPTR qui pointe sur brain ainsi qu'une variable stringREF
//qui est une reference de brain. Le programme affiche l'adresse de brain,
//de stringPTR et de stringREF puis le contenu de brain, stringPTR et
//stringREF.
//
//Une référence est un pointeur avec une syntaxe inversée, ou simplement la syntaxe
//d'une var. Une référence ne peut pas être NULL, on ne peut pas changer l'assignation
//à une variable d'une référence. Pas de maths sur l'adresse d'une référence.
//Et pas de référence sur référence. Les protections se font au niveau du compilateur.
int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "brain address: " << &brain << std::endl;
	std::cout << "stringPTR address: " << stringPTR << std::endl;
	std::cout << "stringREF address: " << &stringREF << std::endl;
	std::cout << "brain content: " << brain << std::endl;
	std::cout << "stringPTR content: " << *stringPTR << std::endl;
	std::cout << "stringREF content: " << stringREF << std::endl;
	return (0);
}
