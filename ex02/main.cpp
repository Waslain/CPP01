/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:00:44 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 11:59:48 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

//Programme comportant une variable brain de type string init à "HI THIS IS BRAIN"
//et une variable stringPTDR qui pointe sur brain ainsi qu'une variable stringRef
//qui est une reference de brain. Le programme affiche l'adresse de brain,
//de stringPTDR et de stringRef puis le contenu de brain, stringPTDR et
//stringRef.
int	main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTDR = &brain;
	std::string &stringRef = brain;

	std::cout << "brain address: " << &brain << std::endl;
	std::cout << "stringPTDR address: " << stringPTDR << std::endl;
	std::cout << "stringRef address: " << &stringRef << std::endl;
	std::cout << "brain content: " << brain << std::endl;
	std::cout << "stringPTDR content: " << *stringPTDR << std::endl;
	std::cout << "stringRef content: " << stringRef << std::endl;
	return (0);
}
