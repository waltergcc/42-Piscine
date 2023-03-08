// #include <stdio.h>
// #include <stdlib.h>

// the atoi of the exam is equal of the original, it isn't equal to the atoi of C04/ex03
// deliver only this function
int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	i = 0;
	sum = 0;

	// The signal starts by default as positive
	sign = 1;

	// while there are spaces or tabs go to the next character
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;

	// If it's a minus sign the value of the 'sign' is inverted and go to next char
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}

	// While the string has numbers, they will be added to sum
	while (str[i] >= '0' && str[i] <= '9')
	{
		// This formula receives the number that is in the index and adds a decimal place
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}
/* 
int	main(void)
{
	char *n = "     -1234ab567";

	// The original atoi is in the Library <stdlib.h>
	printf("Or: %d\n", atoi(n));
	printf("My: %d\n", ft_atoi(n));
} */