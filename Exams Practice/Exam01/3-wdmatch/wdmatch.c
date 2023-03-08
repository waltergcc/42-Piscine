#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	// While the string doesn't reach the null
	while (str[i])
	{
		// Each Char passed by the index "i" will be printed
		write(1, &str[i], 1);
		i++;
	}	
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	// While the string doesn't reach the null
	// the counter "i" will be increased
	while (str[i] != '\0')
		i++;

	// In the end the function returns the number of characters counted
	return (i);
}

int		main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int match = 0;

	// Check if there are exactly 3 arguments
	if (ac == 3)
	{
		while (av[1][i])
		{
			while (av[2][j])
			{
				// if the char of argument 1 is equal to argument 2
				if (av[1][i] == av[2][j])
				{
					// The counter is increased
					match++;

					// Get out of the current loop
					break ;
				}
				j++;
			}
			i++;
		}
		// If the amount of match is equal to the length, print the string
		if (match == ft_strlen(av[1]))
			ft_putstr(av[1]);
	}
	// Print the new line in the end
	write(1, "\n", 1);
}