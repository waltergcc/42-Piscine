#include <unistd.h>

// deliver the program with the main
int		main(void)
{
	// Show '9876543210' with a new line on the standard output
	write(1, "9876543210\n", 11);
}
