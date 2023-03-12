/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_m_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:35:00 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/11 22:29:40 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		ft_get_line(t_map *map, int i, int file_name)
{
	int		j;
	int		reading;
	char	buffer;

	j = 0;

	// while it's true
	while (1)
	{
		// Receive the Char of the file being read
		reading = read(file_name, &buffer, 1);

		// If it's in next the last column
		if (j == map->cols)
		{
			// If the character is not a new line, he returns 1 that means an error
			if (buffer != '\n')
				return (1);

			// otherwise returns 0
			else
				return (0);
		}
		// If the char is different from empty and obstacle or less than 1 byte, returns True
		if ((buffer != map->empty && buffer != map->obstacle) || reading < 1)
			return (1);

		// in each column of the row
		// If the buffer is equal to empty, it receives 1. Otherwise it receives 0
		map->matrix[i][j++] = (buffer == map->empty) ? 1 : 0;
	}
	return (1);
}

int		ft_get_first_line(t_map *map, int file_name)
{
	char		buffer;
	int			i;
	int			reading;

	// makes memory allocation to the first matrix line
	map->matrix[0] = (unsigned short *)malloc(128 * sizeof(unsigned short));
	map->cols = 128;
	i = 0;

	// while it's true
	while (1)
	{
		// Receive the Char of the file being read
		reading = read(file_name, &buffer, 1);

		// If the character read is a new line, leaves the loop
		if (buffer == '\n')
			break ;

		// If the char is different from empty and obstacle or less than 1 byte, returns True
		if ((buffer != map->empty && buffer != map->obstacle) || reading < 1)
			return (1);

		// in each column of the first line
		// If the buffer is equal to empty, it receives 1. Otherwise it receives 0
		map->matrix[0][i++] = (buffer == map->empty) ? 1 : 0;

		// If 'i' is equal to columns
		if (i == map->cols)
		{
			// receives memory relocation with twice the value of the columns
			map->matrix[0] = (unsigned short *)ft_realloc(map->matrix[0], \
				map->cols * sizeof(unsigned short), map->cols * 2 * sizeof(unsigned short));

			// Duplicate the number of columns
			map->cols *= 2;
		}
	}
	// receives memory relocation with the value of the columns counted
	map->matrix[0] = (unsigned short *)ft_realloc(map->matrix[0], \
		map->cols * sizeof(unsigned short), i * sizeof(unsigned short));

	// 'cols' receives the value of columns
	// If this value is zero, with the '!' it will invert the value and return 1, which means it is wrong
	// otherwise it will return 0 which means that any error was found
	return (!(map->cols = i));
}

static void		ft_set_null(t_map *map)
{
	int		i;

	i = 0;

	// while it is less than the number of lines
	while (i < map->rows)
	{
		// matrix receives the null
		map->matrix[i] = NULL;
		i++;
	}
}

int				ft_get_matrix(t_map *map, int file_name)
{
	int		i;

	// makes memory allocation to the matrix by the number of lines
	map->matrix = (unsigned short **)malloc(map->rows * \
		sizeof(unsigned short *));

	// declares the null to all map indexs
	ft_set_null(map);

	// If it has any error returns 1
	// otherwise count the columns and make the memory allocation of the first line
	if (ft_get_first_line(map, file_name))
		return (1);
	i = 1;
	while (i < map->rows)
	{
		// makes memory allocation to the matrix by the number of columns
		map->matrix[i] = (unsigned short *)malloc(map->cols * \
			sizeof(unsigned short));
		
		// If it has any error returns 1
		// otherwise the matrix receives the values of this line sent by i
		if (ft_get_line(map, i, file_name))
			return (1);
		i++;
	}

	// If it still has any value not read in the file what is wrong, so the return is 1
	if (read(file_name, &i, 1))
		return (1);
	
	// If it doesn't present any error the return is 0
	return (0);
}