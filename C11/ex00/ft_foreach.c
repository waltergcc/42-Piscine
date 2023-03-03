/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 23:03:31 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/03 23:03:34 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
} */

// This function receives the pointer of putnbr function as a parameter
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
        // Each value of the int array is printed by putnbr
		f(tab[i]);
        // ft_putchar('\n');
		i++;
	}
}
/* 
int main (void)
{
	int	tab[10] = {50, -63, 25, 998, 4965, -981, 0, 7, 25881, 6};
	
    ft_foreach(tab, 10, &ft_putnbr);
} */
