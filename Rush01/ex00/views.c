#include "header.h"

int	is_correct_right_view(char **puzzle_board, int row)
{
	int		i;
	char	visible;
	char	highest;

	i = 4;
	visible = '1';
	highest = puzzle_board[row][i];

	// starts from right to left
	while (i >= 1)
	{
        // If the value is higher than the highest, the highest receives this value
		if (puzzle_board[row][i] > highest)
		{
			highest = puzzle_board[row][i];
			visible++;
		}
		i--;
	}
	// check if visibility is the same as the club on the other side
	return (puzzle_board[row][5] == visible);
}

int	is_correct_left_view(char **puzzle_board, int row)
{
	int		i;
	char	visible;
	char	highest;

	i = 1;
	visible = '1';
	highest = puzzle_board[row][i];

	// starts from left to right
	while (i <= 4)
	{
        // If the value is higher than the highest, the highest receives this value
		if (puzzle_board[row][i] > highest)
		{
			highest = puzzle_board[row][i];
			visible++;
		}
		i++;
	}
    // If the left clue is equal to the last visible, returns the value of the right view
	if (puzzle_board[row][0] == visible)
		return (is_correct_right_view(puzzle_board, row));

	// If it doesn't have match the return is 0
	return (0);
}

int	is_correct_bottom_view(char **puzzle_board, int column)
{
	int		i;
	char	visible;
	char	highest;

	i = 4;
	visible = '1';
	highest = puzzle_board[i][column];

	// starts from bottom to top
	while (i >= 1)
	{
        // If the value is higher than the highest, the highest receives this value
		if (puzzle_board[i][column] > highest)
		{
			highest = puzzle_board[i][column];
			visible++;
		}
		i--;
	}
	// check if visibility is the same as the club on the other side
	return (puzzle_board[5][column] == visible);
}

int	is_correct_top_view(char **puzzle_board, int column)
{
	int		i;
	char	visible;
	char	highest;

	i = 1;
	visible = '1';
	highest = puzzle_board[i][column];

	// starts from top to bottom
	while (i <= 4)
	{
        // If the value is higher than the highest, the highest receives this value
		if (puzzle_board[i][column] > highest)
		{
			highest = puzzle_board[i][column];
			visible++;
		}
		i++;
	}
    // If the upper clue is equal to the last visible, returns the value of the bottom view
	if (puzzle_board[0][column] == visible)
		return (is_correct_bottom_view(puzzle_board, column));

	// If it doesn't have match the return is 0
	return (0);
}

int	is_in_row(char **puzzle_board, int row, int column, int digit)
{
	int	i;

	i = 1;
	while (i < column)
    {
        // If the digit received is found in the row, the return is 1
		if (puzzle_board[row][i] == digit + '0')
			return (1);
        i++;
    }
    // If it doesn't find the value, the return is 0
	return (0);
}

int	is_in_column(char **puzzle_board, int row, int column, int digit)
{
	int	i;

	i = 1;
	while (i < row)
    {
        // If the digit received is found in the column, the return is 1
		if (puzzle_board[i][column] == digit + '0')
			return (1);
        i++;
    }
    // If it doesn't find the value, the return is 0
	return (0);
}