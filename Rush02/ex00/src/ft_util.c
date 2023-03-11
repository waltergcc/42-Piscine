#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// This function copies a string for a new one by allocating memory
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;

	// The space of src lenght + 1 space is allocated in memory to the 'Dest' pointer
	dest = (char *) malloc(sizeof(char) * (lenght + 1));

	// If there is any problem in the memory allocation, the return is null
	if (dest == NULL)
		return (NULL);
	i = 0;

	// This part makes the copy of 'SRC' for 'Dest'
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;

	// The signal starts by default as positive
	sign = 1;

	// while there are spaces or tabs
	// the 'i' is increased to go to the next character
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;

	// while there are '+' and '-', 'i' is increased
	while (str[i] == '-' || str[i] == '+')
	{
		// If it's a minus sign
		// the value of the 'sign' is inverted
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	// after the spaces and signs of + and -
	// While the string has numbers, they will be added to sum
	while (str[i] >= '0' && str[i] <= '9')
	{
		// This formula receives the number that is in the index and adds a decimal place
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	// In the end, if the number of '-' is even, the number will be positive
	// If the number of '-' is odd, the number will be negative
	return (sign * sum);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	// While the string doesn't reach the null
	while (str[i])
	{
		// Each Char passed by the index "i" will be printed
		write(1, &str[i], 1);
		i++;
	}
}