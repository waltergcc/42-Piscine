/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:45:52 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/15 18:30:12 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>
// #include <string.h>

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
/* 
int	main(void)
{
	char	*src = "string";

	printf("My: %s\n", ft_strdup(src));
	printf("Or: %s\n", strdup(src));
} */
