/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:32:50 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/18 17:15:53 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	// while the counter is less than the passed number
	while (i < n)
	{
		// If s1 is different from S2 or S1 reaches the end
		// The difference between the two is returned
		if (s1[i] != s2[i] || s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	// If the two are equal the return is zero
	return (0);
}
/* 
int	main()
{
	char s1[] = "word";
	char s2[] = "Word";
	int n = 2;

	printf("Or: %d\n", strncmp(s1, s2, n));
	printf("My: %d\n", ft_strncmp(s1, s2, n));
} */
