/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zakdim <zakdim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:35:50 by zakdim            #+#    #+#             */
/*   Updated: 2021/09/07 12:12:45 by zakdim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <strstream>

void Replace(std::string s1, std::string s2, size_t index, std::string &line)
{
	line =  line.substr(0, index) + s2 + &line[s1.length() + index];
	return ;
}

std::string ChangeUppercase(std::string str)
{
	for (int i= 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string line;
	size_t 		index;
	int 		i;
	if (ac != 4)
	{
		std::cout << "\033[31m" << "Error Argumanets" << "\033[0m" << std::endl;
		return (0);
	}
	filename = av[1]; s1 = av[2]; s2 = av[3];
	std::ifstream inFile(filename);
	if (!inFile.is_open())
	{
		std::cout << "\033[31mFile: \033[0m" << filename << "\033[31m not exist!\033[0m" << std::endl;
		return (0);
	}
	std::ofstream outFile(ChangeUppercase(filename) + ".replace");
	if (!outFile.is_open())
		outFile.open(ChangeUppercase(filename) + ".replace");
	while(getline(inFile, line))
	{
		i = 0;
		while (line[i])
		{
			index = line.find(s1, i);
			if (index != std::string::npos)
			{
				Replace(s1, s2, index, line);
				i = index + s2.length();
			}
			else
				i++;
		}
		outFile << line;
		if (!inFile.eof())
			outFile << std::endl;
	}
	outFile.close();
	return (0);
}