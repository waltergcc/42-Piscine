/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:21:28 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/27 15:21:41 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_xdigit(unsigned long long nb, int check)
{
	char	*xdigit;

	xdigit = "0123456789abcdef";

	// When the number that is passed by the ft_print_data function
	// is lower than the base, the value to be printed is '0'
	if (nb < 16 && check == 1)
		ft_putchar('0', 1);

	// If it's larger than the base, it divides and module until it can print the number
	if (nb >= 16)
	{
		ft_xdigit(nb / 16, 0);
		ft_xdigit(nb % 16, 0);
	}
	else
		ft_putchar(xdigit[nb], 1);
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	// This temporary variable is created so as not to change the value of ADDR
	tmp = addr;
	i = 1;

	// This block serves to print the zeros at the beginning of the address
	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp /= 16;
	}
	// After the zeros are printed, the rest of the address is sent for printing
	ft_xdigit(addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int		i;

	i = -1;
	while (i++ < 16)
	{
		// The space will only be printed when the counter is even
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < size)
		{
			// sends the character to position I to be converted to hexadecimal
			ft_xdigit((unsigned long long)*(c + i), 1);
		}
		// When it's on the last line while 'i'
		// is different from column 16, spaces will be printed		
		else if (i != 16)
			ft_putchar(' ', 2);
	}
	i = -1;

	// This block prints the text that contains the string
	while (i++ < size - 1)
	{
		// If it's a non-pritable character, a dot is printed in place
		if (*(c + i) <= 31 || *(c + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	columns;

	i = 0;
	// make the account of how many lines will be needed
	while (i * 16 < size)
	{
		// count how many columns will be needed in each line
		// The value is less than 16 in the last line
		if (i < size / 16)
			columns = 16;
		else
			columns = size % 16;
		
		// This function will print the address
		// The address is sent as long long
		// i * 16 is the position of the string in the index that starts the line
		ft_print_addr((unsigned long long)addr + (i * 16));
		ft_putchar(':', 1);

		// This function will print the columns and the text
		// i * 16 is the position of the string in the index that starts the line
		ft_print_data(addr + (i * 16), columns);
		ft_putchar('\n', 1);
		i++;
	}
	return (addr);
}
/* 
int main()
{
	char *str = "Hello W\1rld! This is a t\2st to print th\1 memory addr\2ss";
	int	size = 0;

	while (str[size])
		size++;
	ft_print_memory(str, size);
} */