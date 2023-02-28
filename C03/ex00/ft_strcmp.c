/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:47:10 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/11 17:33:36 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	// while the two strings are equal and S1 does not reach the end
	while (s1[i] == s2[i] && s1[i])
	{
		// While they are the same, the counter is added
		i++;
	}
	// In the end, if they are equal or different, the value will be returned
	return (s1[i] - s2[i]);
}
/* 
int	main(void)
{
	char	*s1 = "word";
	char	*s2 = "Word";

	// This line calls the original function to verify that the output is the same
	printf("Or: %d\n", strcmp(s1, s2));
	printf("My: %d\n", ft_strcmp(s1, s2));
} */