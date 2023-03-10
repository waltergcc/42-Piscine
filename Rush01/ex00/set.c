#include "header.h"

void	set_clues(char **puzzle_board, char **clues)
{
	int	i;
	int	j;

    // Runs trought o puzzle board
	i = 1;

    // Runs trought the clues
    j = 0;
	while (i <= 4)
	{
        // Puts the clue on the top of the board
		puzzle_board[0][i] = clues[0][j];

        // Puts the clue on the bottom of the board
		puzzle_board[5][i] = clues[1][j];

        // Puts the clue on the left of the board
		puzzle_board[i][0] = clues[2][j];

        // Puts the clue on the right of the board
		puzzle_board[i][5] = clues[3][j];
		i++;
		j++;
	}
}

char	**memory_allocation(int rows, int columns)
{
	char	**table;
	int		i;

	i = 0;

    // makes memory allocation to the position of the lines and checks
	table = (char **)malloc(sizeof(char *) * rows);
	if (table == NULL)
		return (NULL);

	while (i < rows)
	{
        // makes memory allocation to the position of the columns and checks
		table[i] = (char *)malloc(sizeof(char) * columns);
		if (table[i] == NULL)
			return (NULL);
        i++;
	}
	return (table);
}

char	**create_board(void)
{
	char	**board;
	int		i;
	int		j;

    // The array receives the allocation of memory
	board = memory_allocation(6, 6);
	i = 0;

    // Loops runs trought the table in all positions
	while (i < 6)
	{
		j = 0;
		while (j < 6)
        {
            // All positions in the table receive char 0
			board[i][j] = '0';
            j++;
        }
		i++;
	}
	return (board);
}

int	is_correct_params(char **argv)
{	
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (argv[1][i])
	{
        // The counter is increased if the characters are between 1 and 4 and is even
		if (argv[1][i] >= '1' && argv[1][i] <= '4' && i % 2 == 0)
			count++;

        // If the characters in the odd position is space, returns 0
		else if (argv[1][i] != ' ')
			return (0);
		i++;
	}
    // If the counter is 16, the return is true
    if (count == 16)
		return (1);
	return (0);
}

char	**convert_in_array(char *str)
{
	char	**clues;
	int		i;
	int		j;

	i = 0;
	j = 0;

    // The array receives the allocation of memory
	clues = memory_allocation(4, 4);
	while (j < 4)
	{
		clues[0][j] = str[i];
		clues[1][j] = str[i + 8];
		clues[2][j] = str[i + 16];
		clues[3][j] = str[i + 24];
        j++;
		i += 2;
	}
	return (clues);
}