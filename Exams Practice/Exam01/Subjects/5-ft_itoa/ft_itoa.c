#include <stdio.h>
#include <stdlib.h>

// Count the decimal places
int	ft_decimal_places(long n)
{
	int i = 0;

	// If it's negative, 'n' becomes positive and increases 'i'
	if (n < 0)
	{
		n *= -1;
		i++;
	}

	// while 'n' is bigger than 0, divides 'n' by 10
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

// convert a int to char and store it in a array
char	*ft_itoa(int nbr)
{
	int long	n;
	char	*str;
	int	i;
	
	// long int 'n' receives int 'nb'
	// to avoid the issues with the int min
	n = nbr;

	// 'I' receives the decimal places
	i = ft_decimal_places(n);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	
	// The last position of the string receives the null
	str[i--] = '\0';

	// If 'n' is 0, the first position of the string gets '0' and returns
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}

	// If it's negative, the first position of the string receives '-' E 'n' becomes positive
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}

	// While 'n' is greater than 0, STR receives the 'n' module for 10
	while (n > 0)
	{
		str[i] = n % 10 + '0';

		// 'n' decreases a decimal place
		n /= 10;
		i--;
	}
	return (str);
}
/* 
int	main(void)
{
	int	n = -987564;
	int	i = 0;
	char	*str = ft_itoa(n);

	while (str[i])
	{	
		printf("str[%d] = [%c]\n", i, str[i]);
		i++;
	}
} */
