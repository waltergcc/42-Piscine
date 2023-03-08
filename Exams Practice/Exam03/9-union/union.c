#include <unistd.h>

int		appeared_before_in_other_string(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		// If Str[i] is the same as Char, returns true
		if (str[i] == c)
			return (1);
		i++;
	}

	// If it has not appeared before, the return is false
	return (0);
}

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

void	ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		// If the character didn't appear before in the current string, it is printed
		if (!appeared_before(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		// If the character didn't appear before in the other string
		if (!appeared_before_in_other_string(s1, s2[i]))
		{
			// If the character didn't appear before in the current string, it is printed
			if (!appeared_before(s2, s2[i], i))
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	// only calls the function if you have only 3 arguments
	if (ac == 3)
		ft_union(av[1], av[2]);

	// Print the new line in the end
	write(1, "\n", 1);
}