#include <unistd.h>

// deliver the program with the main
int		main(void)
{
	// Print 'aBcDeFgHiJkLmNoPqRsTuVwXyZ' with a new line on the standard output
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
}