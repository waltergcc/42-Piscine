#include "header.h"

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_solution(char **puzzle_board)
{
	int	i;
	int	j;

	i = 1;

    // If the final value of line 0 column 0 is Char 1, gets out
	if (puzzle_board[0][0] == '1')
		return ;

    // line 0 column 0 receive Char 1, Mark in the pointer the impression as true
	puzzle_board[0][0] = '1';

	// The Loops runs trough all board values
	while (i <= 4)
	{
		j = 1;
		while (j <= 4)
		{
			// Prints the character
			ft_putchar(puzzle_board[i][j]);
			j++;

			// If it's different from 5 prints a space
			if (j != 5)
				ft_putchar(' ');
		}
		// Prints the new line
		ft_putchar('\n');
		i++;
	}
}