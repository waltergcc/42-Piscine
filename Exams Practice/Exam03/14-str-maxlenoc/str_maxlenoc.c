#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

//  check if one string is substring from another to a given final index
int ft_strstr(char *str, char *substr, int end)
{
	int is_substring = 0;
	int i = 0;
	int j = 0;

	// while 'str' doesn't reach the end and is not a substring
	while (str[i] && !is_substring)
	{
		is_substring = 1;
		while (j <= end)
		{
			// If there is no correspondence, substring receives 0 and leaves the loop
			if (str[i] != substr[j])
			{
				is_substring = 0;
				break ;
			}
			j++;
			i++;
		}
		i++;
	}
	// In the end, it returns if it is a substring or not
	return (is_substring);
}

int main(int argc, char **argv)
{
	int	is_substring;
	int size;
	int i;
	int j;
	int k;
	int	start = 1;
	int	end = 0;

	// checks if it has more than 1 argument
	if (argc > 1)
	{
		i = 0;

		// Count the 'lenght' of the first parameter
		size = ft_strlen(argv[1]);
		while (i < size)
		{
			is_substring = 1;
			j = i;
			while (j < size && is_substring)
			{
				is_substring = 1;
				k = 2;
				while (k < argc && is_substring)
				{
					// If not substring, substring receives 0 and leaves the loop k
					if (!(ft_strstr(argv[k], &argv[1][i], j - i)))
					{
						is_substring = 0;
						break;
					}
					k++;
				}
				// If not substring, leaves the loop j
				if (!is_substring)
					break ;

				// if the range of the counters is greater than the longest substring
				if (j - i > end - start)
				{
					// The counters of the longest substring are updated
					start = i;
					end = j;
				}
				j++;
			}
			i++;
		}
		// if the longest substring range is greater than or equal to 0
		if (end - start >= 0)

			// prints from the position of the start of the longest substring
			// and the Write buffer gets the size of the longest substring
			write(1, &argv[1][start], end - start + 1);
	}
	// Prints the new line at the end
	write(1, "\n", 1);
}