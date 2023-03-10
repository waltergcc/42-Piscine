#include "header.h"

void	rush_recursive(char **puzzle_board, int row, int column)
{
	int	i;

	i = 1;

    // Runs all lines and columns
	while (i <= 4 && row <= 4 && column <= 4)
	{
        // If the value is not found on the row and column
		if (!is_in_column(puzzle_board, row, column, i) && !is_in_row(puzzle_board, row, column, i))
		{
            // If the value is not found, Puzzle Board receives the value
			puzzle_board[row][column] = i + '0';

			// If it's the last row and the vision isn't correct, it comes out of the function
			if (row == 4 && !is_correct_top_view(puzzle_board, column))
				return ;

			// If it's the last column
			if (column == 4)
			{
				// If the left view is correct, it recursively calls to the next line
				if (is_correct_left_view(puzzle_board, row))
				{
					rush_recursive(puzzle_board, row + 1, 1);

					// If it's the last row and the vision is correct, it Prints the solution
					if (row == 4 && is_correct_top_view(puzzle_board, column))
						print_solution(puzzle_board);
				}
			}
            // If the value is found, the recursive function goes to the next column
			else
				rush_recursive(puzzle_board, row, column + 1);
		}
		i++;
	}
}

void	rush(char **clues)
{
	char	**puzzle_board;

    // Create the puzzle board
	puzzle_board = create_board();

    // Position the clues around the board
	set_clues(puzzle_board, clues);

    // Solves the puzzle recursively
	rush_recursive(puzzle_board, 1, 1);

    // If the final value of line 0 column 0 is Char 0, print the error
	if (puzzle_board[0][0] == '0')
		print_error();
}