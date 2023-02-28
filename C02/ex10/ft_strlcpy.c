/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:27:37 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/22 09:06:06 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//This function will return the SRC Lenght
// and will add SRC to DEST according to the past size
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		// While SRC doesn't reach the end and the counter is less than size less one
		// Size less one to be able to receive the null
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	// Returns the SRC Lenght
	return (ft_lenght(src));
}
/*  
int	main(void)
{
	char	src[] = "letters";
	char	dest[11];
	int	n = 6;

	printf("src: %s\nlenght returned: %d\ndest: %s\n", src, ft_strlcpy(dest, src, n), dest);
} */
