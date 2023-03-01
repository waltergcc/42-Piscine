/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:22:04 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/01 00:22:08 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// function that prints the founded solution
void	ft_print_solution(int *chessboard)
{
	int	i;

	i = 0;
    // prints the position of each queen on the board
	while (i < 10)
		ft_putchar(chessboard[i++] + '0');
	ft_putchar('\n');
}

// Check if two queens can attack each other in a given position
int	attack_possibility(int *chessboard, int p)
{
	int	i;

	i = 0;
    // Checks all previous positions
	while (i < p)
	{
        // check if there are two queens in the same column
		if (chessboard[i] == chessboard[p] && i != p)
			return (1);
		if (i != p)
		{
            // Check if there are two queens in the same diagonal
            // If so, the return is 1
			if (chessboard[i] == chessboard[p] - (p - i)
				|| chessboard[i] == chessboard[p] + (p - i))
				return (1);
		}
		i++;
	}
    // return 0 when there are no possibility of attacks between queens
	return (0);
}

void	ft_ten_queens_puzzle_recursive(int chessboard[], int p, int *solutions)
{
	int	i;

	i = 0;
    // checks if all queens have been positioned
    // If so, the solution is printed
	if (p == 10)
	{
		ft_print_solution(chessboard);

        // increases the number of founded solutions
		(*solutions)++; 
	}
	else
	{
        // Put the queens in all columns without chance for attacks
		while (i <= 9)
		{
            // assign the position to the queen
			chessboard[p] = i;

            // Check the possibilities of attacks between the queens
            // only advances to the next position when there is no possibility of attack
			if (!attack_possibility(chessboard, p))
				ft_ten_queens_puzzle_recursive(chessboard, p + 1, solutions);
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
    // array to store the positions of the queens
	int	chessboard[10];
	int	solutions;

    // number of solutions found initially is zero
	solutions = 0;

    // Find all possible solutions
    // 'Solutions' is sent as a pointer
	ft_ten_queens_puzzle_recursive(chessboard, 0, &solutions);

    // Returns the total number of solutions found
	return (solutions);
}
/* 
int main()
{
    printf("Solutions founded: %d\n", ft_ten_queens_puzzle());
} */
