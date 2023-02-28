/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:21:43 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/09 18:26:40 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	// while src is not over and the counter is smaller than n
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	// If the N is greater than dest, it's necessary to put the null in all the remaining indices
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[] = "######";
	char	src[] = "Source";
	int	n = 2;
	
	printf("dest before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("dest after: %s\n", dest);
} */
