#include <unistd.h>

// deliver the program with the main
int		main(void)
{
	// Print 'Hello World!' with a new line on the standard output
	write(1, "Hello World!\n", 13);
}