/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 18:57:22 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/03 19:45:23 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';

	//while letter is less than or equal to z
	while (letter <= 'z')
	{
		//print letter
		write(1, &letter, 1);

		//go to next letter
		letter++;
	}
}
/* int	main(void)
{
	ft_print_alphabet();
} */
