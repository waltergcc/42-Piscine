/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:15:03 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/15 18:31:35 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_all_lenghts(int size, char **strs, char *sep)
{
	int		i;
	int		sum;
	char	*all_together;

	// 'sum' will receive the count of all characters
	sum = 0;
	i = 0;

	// if negative or zero size, 'sum' receives 1
	// receives 1 to at the end this space receive the null
	if (size <= 0)
		sum = 1;

	// If it's greater than 0, the lenghts count starts
	else
	{
		// count the characters of each string of 'strs'
		while (i < size)
		{
			sum += ft_strlen(strs[i]);
			i++;
		}
		// count the separator.
		// 'size' - 1 are the times that separators will be needed
		sum += ft_strlen(sep) * size - 1;
	}

	// The memory allocation is made for 'STR'
	all_together = (char *) malloc(sizeof(char) * sum);
	if (all_together == NULL)
		return (0);
	return (all_together);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		c;
	char	*all_together;

	// 'str' receives the memory allocated to the size of all lenghts
	all_together = ft_all_lenghts(size, strs, sep);
	i = 0;
	c = 0;

	while (size > i)
	{
		j = 0;

		// assing the char of str to 'all_together'
		while (strs[i][j])
		{
			// The increase in the line serves to save lines
			all_together[c++] = strs[i][j++];
		}
		j = 0;

		// pass all the characters from 'sep' to all_together
		while (sep[j] && i != size - 1)
		{
			all_together[c++] = sep[j++];
		}
		i++;
	}
	// In the end it is necessary to include the null
	all_together[c] = '\0';
	return (all_together);
}
/* 
int	main(void)
{
    char *strs[] = {"Hello", "world", "this", "is", "a", "test"};
	int size = 6;
	char *sep = " ";
	int	i = 0;
	char	*all_together = ft_strjoin(size, strs, sep);

	while (i < size)
	{
		printf("String in the index %d: %s\n", i, strs[i]);
		i++;
	}
	printf("New string: %s\n", all_together);
	free(all_together);
} */
