/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:35 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/26 14:39:42 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/*
	Programme prenant 3 paramètres dans l'ordre suivant : un nom de fichier et 
	deux strings s1 et s2. le fichier "filename" sera ouvert et son contenu
	copié dans un nouveau fichier "filename.replace" où chaque occurence de s1
	sera remplacée par s2.
*/

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Mauvais nombre of arguments" << std::endl;
		std::cout << "Veuillez entrer <filename>, <strtoreplace>, <replace>" << std::endl;
		return (1);
	}
	else
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		if (filename.empty() || s1.empty() || s2.empty())
		{
			std::cout << "Au moins une de vos entrée est vide" << std::endl;
			return (1);
		}
		std::ifstream filein(filename.c_str());
		if (filein.is_open())
		{
			std::cout << "Le fichier est ouvert, copie en cours..." << std::endl;
			std::string line;
			std::ofstream fileout((filename + ".replace").c_str());
			if (fileout.is_open())
			{
				while (std::getline(filein, line))
				{
					while (line.find(s1) != std::string::npos)
					{
						size_t	pos = line.find(s1);
						line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
					}
					fileout << line << std::endl;
				}
				std::cout << "Copie terminée" << std::endl;
				fileout.close();
				filein.close();
			}
			else
				std::cout << "Le fichier de sortie n'a pas pu être ouvert" << std::endl;
		}
		else
		{
			std::cout << "Le fichier n'a pas pu être ouvert" << std::endl;
			return (1);
		}
	}
	return (0);
}