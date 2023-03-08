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
			// If 'Char' is between 'a' and 'y', 'Str' receives 'Char' + 1
			if((argv[1][i] >= 'A' && argv[1][i] <= 'Y') || (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
				argv[1][i] += 1;

			// If 'Char' is 'z', 'Str' receives 'Char' - 25
			else if((argv[1][i] == 'z' || argv[1][i] == 'Z'))
				argv[1][i] -= 25;

			// Prints the char
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	// Print the new line in the end
	write(1, "\n", 1);
}
