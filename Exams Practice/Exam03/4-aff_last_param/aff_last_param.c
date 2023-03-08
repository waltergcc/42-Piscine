#include <unistd.h>

int		main(int argc, char **argv)
{
	int i = 0;

	// receives the value of the last index
	int last = argc - 1;

	// If argc is greater than 1
	if (argc > 1)
	{
		// prints the last argument
		while (argv[last][i])
		{
			write(1, &argv[last][i], 1);
			i++;
		}
	}
	// Prints a new line
	write(1, "\n", 1);
}