// #include <stdio.h>

// deliver only this function 
char	*ft_strrev(char *str)
{
	int i = 0;
	int last;
	char temp;

	// Count the string length
	while (str[i])
		i++;

	// 'last' receives the String Lenght - 1
	last = i - 1;
	i = 0;
	while (last > i)
	{
		// Change the first index with the last
		temp = str[i];
		str[i] = str[last];
		str[last] = temp;

		// Go to the next indices
		i++;
		last--;
	}
	return (str);
}
/* 
int	main(void)
{
	char	str[17] = "words and letters";

	printf("Regular String: %s\n", str);
	printf("Reversed String: %s\n", ft_strrev(str));
} */