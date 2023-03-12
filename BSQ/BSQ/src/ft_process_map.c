/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:34:24 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/12 00:06:10 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_free_map(t_map *map)
{
	int		i;

	i = 0;
	while (i < map->rows)

		// If it is not null, release line by line
		if (map->matrix[i])
			free(map->matrix[i++]);
		else
			break ;

	// Free the allocation for the matrix
	free(map->matrix);

	// Free the allocation for the map
	free(map);
}

static int		ft_min(int a, int b, int c)
{
	// Returns the value that is smaller
	if (a <= b && a <= c)
		return (a);
	else if (b <= c && b <= a)
		return (b);
	else
		return (c);
}

void			ft_get_square(t_map *map)
{
	// Registers help at loop time
	register int	row;
	register int	col;

	// receives the index of rows
	row = map->rows - 1;
	while (row >= 0)
	{
		// receives the index of columns
		col = map->cols - 1;
		while (col >= 0)
		{
			// Starts from the last line and column
			// If not null, do the other checks
			if (map->matrix[row][col])
			{
				// If it is not the last line or column
				if (!(row == map->rows - 1 || col == map->cols - 1))

					// The current position receives the lowest value
					// between the side of the side, below and diagonal
					// In the end adds 1 more
					map->matrix[row][col] = ft_min(map->matrix[row + 1][col + 1], \
						map->matrix[row + 1][col], map->matrix[row][col + 1]) + 1;

				// If it is larger than the maximum size of the square
				if (map->matrix[row][col] >= map->square_size)
				{
					// Square_size receives the value of the current position
					map->square_size = map->matrix[row][col];

					// The list receives the value of row and column
					map->square_row = row;
					map->square_col = col;
				}
			}
			col--;
		}
		row--;
	}
}

static void		ft_print_solution(t_map *map, int start_square_row, int start_square_col)
{
	register int	finish_square_row;
	register int	finish_square_col;
	register int	i;
	register int	j;

	finish_square_row = start_square_row + map->square_size - 1;
	finish_square_col = start_square_col + map->square_size - 1;
	i = 0;

	// the loops travel the rows and columns of the matrix
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			// If the position has the value 0 prints the obstacle
			if (!(map->matrix[i][j]))
				write(1, &(map->obstacle), 1);

			// If it's in the largest square, print full
			else if (i >= start_square_row && i <= finish_square_row && \
					j >= start_square_col && j <= finish_square_col)
				write(1, &(map->full), 1);

			// otherwise print empty
			else
				write(1, &(map->empty), 1);
			j++;
		}
		// Print the new line at the end of the row
		write(1, "\n", 1);
		i++;
	}
}

void			ft_process_map(t_map *map)
{
	int			start_square_row;
	int			start_square_col;

	// find the largest square inside the matrix
	// uses the dynamic programming technique, calculating the size of the largest square
	// In each position of the matrix, from the adjacent squares already calculated. 
	ft_get_square(map);
	
	// receives the row number where the largest square begins
	start_square_row = map->square_row;

	// receives the column number where the largest square begins
	start_square_col = map->square_col;

	// Prints the solution
	ft_print_solution(map, start_square_row, start_square_col);

	// Free the map memory
	ft_free_map(map);
}