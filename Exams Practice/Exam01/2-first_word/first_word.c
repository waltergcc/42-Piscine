#include <unistd.h>

// deliver the program with the main
int		main(int ac, char **av)
{
	int i;

	i = 0;

	// only calls the function if you have only 2 arguments
	if (ac == 2)
	{
		// Go to the next character is space or tab
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;

		// while the argument 1 is not over and it is not space or tab
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			// Prints the char
			write(1, &av[1][i], 1);
			i++;
		}
	}
	// Print the new line only at the end of the string
	write(1, "\n", 1);
	return (0);
}