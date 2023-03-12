/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:35:23 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/12 00:05:57 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

static bool		ft_isnumber(char *str)
{
	while (*str)
	{
		// If it doesn't contain numbers returns 0
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	// If it has a number returns true
	return (1);
}

int				ft_map_header(t_map *map, int file_name)
{
	char	buffer;
	char	rows[13];
	char	*prows;

	//prows points to array rows
	prows = rows;
	while (1)
	{
		// If Char read is less than 1 byte or has more than 13 chars, Returns True
		if (read(file_name, &buffer, 1) < 1 || (prows - rows == 13))
			return (1);

		// If the character read is a new line, leaves the loop
		if (buffer == '\n')
			break ;

		// rows receives the char of buffer
		*prows++ = buffer;
	}
	// check if there are chars enough to define the characters
	if (prows - rows >= 4)
	{
		// receives the character that will be the filled
		map->full = *(prows - 1);

		// receives the character that will be the obstacle
		map->obstacle = *(prows - 2);

		// receives the character that will be the emptiness
		map->empty = *(prows - 3);

		// defines the null to separate the number in rows
		*(prows - 3) = '\0';
	}
	// If it doesn't have enough lines, the return is true
	else
		return (1);

	// If Chars stored in Rows are not numbers
	// or the char_empty is the same as the obstacle, returns True
	if (!ft_isnumber(rows) || map->empty == map->obstacle)
		return (1);

	// rows recebe o número de linhas convertidos por atoi
	// If this value is zero, with the '!' it will invert the value and return 1, which means it is wrong
	// otherwise it will return 0 which means that any error was found
	return (!(map->rows = ft_atoi(rows)));
}

t_map	*ft_create_map(char *file_name)
{
	t_map	*map;
	int		file;

	// If it receives the parameter as Stdin
	if (!ft_strcmp(file_name, "STDIN"))
	
		// File receives what is typed at the terminal
		file = STDIN_FILENO;

	// Otherwise it receives the file in reading mode
	else
		file = open(file_name, O_RDONLY);

	// If it can't open the file returns the error message
	if (file == -1)
		return (ft_map_error());

	// makes memory allocation
	map = (t_map *)malloc(sizeof(t_map));

	// If it has any error in the map header Free memory and prints the error message
	// otherwise stores the header values on the list
	if (ft_map_header(map, file))
	{
		free(map);
		return (ft_map_error());
	}

	// If it has any error in the map matrix Free memory and prints the error message
	// otherwise Create the Matrix
	if (ft_get_matrix(map, file))
	{
		ft_free_map(map);
		return (ft_map_error());
	}

	// Closes the file
	close(file);

	// It initializes the maximum size of the square as 0
	map->square_size = 0;

	// Returns the Matrix created
	return (map);
}