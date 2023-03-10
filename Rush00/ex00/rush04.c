// Declares the prototype of the 'ft_putchar' function
void	ft_putchar(char c);

// This function run trought the columns
void	ft_print(int columns, char first, char between, char last)
{
	int	i;

	i = 1;

	// while the counter is less than the columns
	while (i <= columns)
	{
		// If it's in the first column, print the first char
		if (i == 1)
			ft_putchar(first);

		// If it's in the last column, print the first char
		else if (i == columns)
			ft_putchar(last);

		// If if's in the middle, print 'Between'
		else
			ft_putchar(between);
		i++;
	}
	// Prints a new line in the end
	ft_putchar('\n');
}

// This function run trought the lines
void	rush(int x, int y)
{
	int	i;
    int column;
    int	line;

	i = 1;
	column = x;
	line = y;
    // If the column and the line is greater than 1
	if (column >= 1 && line >= 1 )
	{
        // while the counter is less than or equal to the number of lines
		while (i <= line)
		{
			// If it's in the first line
			if (i == 1)
				
				// print the standard of the first line by passing the number of columns
				ft_print(column, 'A', 'B', 'C');

			// If it's in the last line
			else if (i == line)

				// print the standard of the last line by passing the number of columns
				ft_print(column, 'C', 'B', 'A');
			else
				// print the standard of the middle lines by passing the number of columns
				ft_print(column, 'B', ' ', 'B');
			i++;
		}
	}
}