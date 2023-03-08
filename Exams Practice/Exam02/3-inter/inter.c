#include <unistd.h>

// check if the character has appeared before
int		appeared_before(char *str, char c, int pos)
{
	int i;

	i = 0;
	// checks even the position before the received Char
	while (i < pos)
	{
		// If Str[i] is the same as Char, returns true
		if (str[i] == c)
			return (1);
		i++;
	}
	// If it has not appeared before, the return is false
	return (0);
}
void	inter(char *s1, char *s2)
{
	int	i = 0;
	int	j;

	// runs the two strings index by index
	while (s1[i])
	{
		// 'J' always returns to the beginning 
		j = 0;
		while (s2[j])
		{
			// If what is in s1 is equal to s2
			if (s1[i] == s2[j])
			{
				// If the character didn't appear before, it is printed
				if (!appeared_before(s1, s1[i], i))
				{
					write(1, &s1[i], 1);
					
					// Get out of the current loop
					break ;
				}
			}
			j++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	// only calls the function if you have only 3 arguments
	if (ac == 3)
		inter(av[1], av[2]);

	// Print the new line in the end
	write(1, "\n", 1);
}