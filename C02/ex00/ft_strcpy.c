/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:03:14 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/09 15:05:11 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// This function will copy the content from one string to another, including the null
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	// While 'src' doesn't reach the end
	while (src[i] != '\0')
	{
		//'dest' receives the character that is in 'src'
		dest[i] = src[i];
		i++;
	}
	// In the end 'dest' receives the null of 'src'
	dest[i] = src[i];

	//'dest' is returned
	return (dest);
}
/* 
int	main(void)
{
	char	dest[] = "Dest";
	char	src[] = "Source";

	printf("dest before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("dest after: %s\n", dest);
} */
