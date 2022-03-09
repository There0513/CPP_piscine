/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: threiss <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:31:52 by threiss           #+#    #+#             */
/*   Updated: 2022/03/09 12:34:36 by threiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	coucou = "HI THIS IS BRAIN";

	std::string *stringPTR = &coucou;
	std::string &stringREF = coucou;

	std::cout << &coucou << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << std::endl;
	
	std::cout << coucou << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	// stringREF = "new_coucou";
	// std::cout << "coucou = " << coucou << std::endl;
	// -> the variable 'coucou' will be "new_coucou"
	return 0;
}
