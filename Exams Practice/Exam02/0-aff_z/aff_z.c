#include <unistd.h>

int		main(int argc, char **argv)
{
	// Call the parameters and do nothing
	// If it doesn't call the parameters it gives compilation error
	(void)argc;
	(void)argv;

	// In all cases it will print a 'z' with a new line
	write(1, "z\n", 2);
}