#include "header.h"

int	main(int argc, char **argv)
{	
	char	**clues;

    // Check if the parameters follow the rules and receive in a array
	clues = convert_in_array(argv[1]);

    // If the parameters are not valid, print the error message
	if (!is_correct_params(argv) || argc != 2)
		print_error();

    // If it's valid, it calls the rush function
	else
		rush(clues);
	return (0);
}