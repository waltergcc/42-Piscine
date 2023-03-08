// #include <stdio.h>

// deliver only this function
char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	// While 's2' doesn't reach the end
	while (s2[i])
	{
		//'s1' receives the character that is in 's2'
		s1[i] = s2[i];
		i++;
	}
	// In the end 's1' receives the null
	s1[i] = '\0';

	//'s1' is returned
	return (s1);
}
/* 
int	main(void)
{
	char	s1[] = "letters";
	char	s2[] = "word";

	printf("Before: %s\n", s1);
	ft_strcpy(s1, s2);
	printf("After: %s\n", s1);
} */