#include <unistd.h>

// deliver the program with the main
int	main(int argc, char **argv)
{
	int	i = 0;

	// only calls the function if you have only 2 arguments
	if (argc == 2)
	{
		while(argv[1][i])
		{
			// If 'Char' is between 'a' and 'm', 'Str' receives 'Char' + 13
			if((argv[1][i] >= 'A' && argv[1][i] <= 'M') || (argv[1][i] >= 'a' && argv[1][i] <= 'm'))
				argv[1][i] += 13;

			// If 'Char' is between 'n' and 'z', 'Str' receives 'Char' - 13
			else if((argv[1][i] >= 'N' && argv[1][i] <= 'Z') || (argv[1][i] >= 'n' && argv[1][i] <= 'z'))
				argv[1][i] -= 13;

			// Prints the char
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	// Print the new line in the end
	write(1, "\n", 1);
}