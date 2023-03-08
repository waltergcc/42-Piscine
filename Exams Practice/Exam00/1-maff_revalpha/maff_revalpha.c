#include <unistd.h>

// deliver the program with the main
int		main(void)
{
	// Print 'zYxWvUtSrQpOnMlKjIhGfEdCbA' with a new line on the standard output
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}