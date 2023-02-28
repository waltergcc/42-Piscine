/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:45:02 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/13 17:23:23 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	rev;

	i = 1;
	rev = argc - 1;
	while (i < argc)
	{
		j = 0;
		while (argv[rev][j] != '\0')
		{
			ft_putchar(argv[rev][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
		rev--;
	}	
}
