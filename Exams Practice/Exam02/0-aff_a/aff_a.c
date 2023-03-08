#include <unistd.h>

int		main(int argc, char **argv)
{
	int i = 0;

	// Check if it have only 2 arguments
	if (argc == 2)
	{
		while (argv[1][i])
		{
			// If it find a 'a', it prints it and leaves the loop
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			i++;
		}
		// If it not find a 'a', it prints only a new line
		write(1, "\n", 1);
	}
	// If it doesn't have 2 arguments, print a 'a' with a new line
	else
	   write(1, "a\n", 2);
}