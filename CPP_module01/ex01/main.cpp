/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: threiss <threiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:04:54 by threiss           #+#    #+#             */
/*   Updated: 2022/03/06 10:08:54 by threiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(4, "Berni");
	int	i = 0;

	while (i < 4)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
}
