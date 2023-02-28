/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:04:33 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/13 13:57:47 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// This function returns the lenght of the strings that will be concatenated
// It also changes the destination string
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;
	unsigned int	sum;

	i = 0;
	sum = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	// If the past value is higher than dest
	if (size > d)
		// Lengths receives the SRC and dest lengths
		sum = d + s;
	else
		// Otherwise it receives the SRC lenght plus the size
		sum = s + size;
	
	// While SRC doesn't reach the end and size is larger than dest + 1
	while (src[i] && size > (d + 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	// The last position of the size is stored for the null
	dest[d] = '\0';
	return (sum);
}
/* 
int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "src";
	int	size = 6;

	printf("Dest Before: %s\n", dest);
	printf("Return of strlcat: %d\n", ft_strlcat(dest, src, size));
	printf("Dest after: %s\n", dest);
} */