#include <unistd.h>

int		main(int ac, char **av)
{
	int i = 0;

	// Check if it has only 2 arguments
	if (ac == 2)
	{
		while (av[1][i])
		{
			// If it's a uppercase char, exchange for lowercase
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 32;

			// If it's a lowercase char, exchange for uppercase
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] -= 32;

			// Prints the char
			write(1, &av[1][i], 1);
			i++;
		}
	}
	// Prints the new line
	write(1, "\n", 1);
}