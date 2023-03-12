/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:34:00 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/12 00:06:23 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int ac, char **av)
{
	t_map		*map;
	int			i;

	// If it doesn't have 4 arguments the program starts typing on the terminal itself
	if (ac < 2)
	{
		// Create the map according to what was written at the terminal
		map = ft_create_map("STDIN");

		// If it is not empty, process the map
		if (map)
			ft_process_map(map);
		return (0);
	}
	i = 1;
	
	// go through the all arguments
	while (i < ac)
	{
		// generates the map according to the mapa name received
		map = ft_create_map(av[i]);

		// If it is not empty, process the created map
		if (map)
			ft_process_map(map);
		i++;

		// If there are more arguments, it generates a new line between the Maps
		if (i < ac)
			write(1, "\n", 1);
	}
	return (0);
}