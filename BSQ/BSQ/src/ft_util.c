/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 21:39:52 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/12 00:06:16 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

// Displays the error message
t_map	*ft_map_error(void)
{
	write(STDERR_FILENO, "map error\n", 10);
	return (NULL);
}

void	*ft_memcpy(void *dest, void *src, size_t num)
{
	unsigned char	*pointer_to_dest;
	unsigned char	*pointer_to_src;

	// The pointers receive the addresses
	pointer_to_dest = (unsigned char *)dest;
	pointer_to_src = (unsigned char *)src;
	while (num--)

		// copy the memory data of src
		*pointer_to_dest++ = *pointer_to_src++;
	return (dest);
}

void	*ft_realloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*tmp;

	// Temp receives memory allocation for the new size
	tmp = malloc(new_size);

	// Copy all ptr memory data to tmp
	ft_memcpy(tmp, ptr, (old_size < new_size) ? old_size : new_size);

	// free the pointer
	free(ptr);
	return (tmp);
}

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

int				ft_atoi(char *str)
{
	int		number;
	int		sign;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	else
		sign = 1;
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + *str - '0';
		str++;
	}
	return (sign * number);
}