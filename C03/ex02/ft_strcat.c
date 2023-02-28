/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:45:06 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/10 11:33:14 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// This function will concatenate the two strings
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	// count dest until reach the end
	while (dest[i] != '\0')
		i++;
	j = 0;
	// until the end of src, dest receive src
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	// In the end dest receives the null
	dest[i] = '\0';
	return (dest);
}
/* 
int	main(void)
{
	char	dest[10] = "dest";
	char	src[10] = "src";

	ft_strcat(dest, src);
	printf("String: %s\n", dest);
} */