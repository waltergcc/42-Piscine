/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 20:43:22 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/25 20:50:52 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include "ft_convert.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	digit_places(int nbr, char *base, int i)
{
	int				size;
	unsigned int	n;

	size = ft_strlen(base);
	if (nbr < 0)
	{
		n = nbr * -1;
		i++;
	}
	else
		n = nbr;
	while (n >= (unsigned)size)
	{
		n /= size;
		i++;
	}
	i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base, char *converted_str)
{
	int		size;
	long	n;
	int		j;
	int		i;

	size = ft_strlen(base);
	i = digit_places(nbr, base, 0);
	n = nbr;
	j = 0;
	if (n < 0)
	{
		converted_str[0] = '-';
		n *= -1;
		j = 1;
	}
	i--;
	while (n >= size)
	{
		converted_str[i] = base[n % size];
		n /= size;
		i--;
	}
	if (n < size)
		converted_str[j] = base[n];
}
/*
int main(void)
{
    char converted_str[30];
    
    ft_putnbr_base(-9587, "0123456789", converted_str);
    printf("%s\n", converted_str); 

}*/
