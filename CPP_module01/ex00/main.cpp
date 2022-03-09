/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: threiss <threiss@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 11:04:54 by threiss           #+#    #+#             */
/*   Updated: 2022/03/09 12:13:32 by threiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Bernd = newZombie("Bernd");
	Bernd->announce();
	randomChump("Hanne");
	delete Bernd;	// Bernd is destroyed
	return 0;
}
