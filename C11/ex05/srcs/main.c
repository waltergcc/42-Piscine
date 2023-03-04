/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 11:54:04 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/04 11:54:06 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	operator(int a, char *op, int b)
{
	int	result;

	// This line declares an array of functions
	int	(*operator[5])(int, int);

	operator[0] = &ft_add;
	operator[1] = &ft_sub;
	operator[2] = &ft_mul;
	operator[3] = &ft_div;
	operator[4] = &ft_mod;
	result = 1;

	// according to the received char, 'result' receives a different function
	if (op[0] == '+')
		result = operator[0](a, b);
	else if (op[0] == '-')
		result = operator[1](a, b);
	else if (op[0] == '*')
		result = operator[2](a, b);
	else if (op[0] == '/')
		result = operator[3](a, b);
	else if (op[0] == '%')
		result = operator[4](a, b);
	return (result);
}

void	do_op(char *fst_nbr, char *op, char *snd_nbr)
{
	int	a;
	int	b;
	int	result;

	result = 1;

	// converts the characters into int
	a = ft_atoi(fst_nbr);
	b = ft_atoi(snd_nbr);

	// If 'op' is not one of the signals, it prints a '0'
	if (!(op[0] == '+' || op[0] == '-'
			|| op[0] == '/' || op[0] == '%' || op[0] == '*'))
		ft_putchar('0');

	// If it's a division operator and the division is by 0, print the message
	else if (op[0] == '/' && b == 0)
		ft_putstr("Stop : division by zero");

	// If it's a module operator and the modulo is by 0, print the message
	else if (op[0] == '%' && b == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		// 'result' recebe a operação matemática entre os dois número
		result *= (operator(a, op, b));

		// Prints 'result'
		ft_putnbr(result);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	// check if 'ac' is exactly 4 parameters
	if (ac == 4)
		// av[1] is the first nbr, av[2] is the operator and av[3] is the second nbr
		do_op(av[1], av[2], av[3]);
	return (0);
}