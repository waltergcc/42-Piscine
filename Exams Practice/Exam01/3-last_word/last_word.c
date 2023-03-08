#include <unistd.h>

// deliver the program with the main
int main(int ac, char **av)
{
	int	i = 0;

	// only calls the function if you have only 2 arguments
	if (ac == 2)
	{
		// Count the string length
		while (av[1][i])
			i++;

		// positions 'i' in the last index
		i--;

		// At the end of the string, while it has space or tab, decrees the 'i'
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		
		// Runs the string until the last word begins
		while (i > 0 && (av[1][i] != ' ' && av[1][i] != '\t'))
			i--;

		// positions 'i' in the index that starts the word
		i++;

		// Until the end or space comes, the word is printed
		while (av[1][i] != ' ' && av[1][i] != '\t' && av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	// Print the new line in the end
	write(1, "\n", 1);
}