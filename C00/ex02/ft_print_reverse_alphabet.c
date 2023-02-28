/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:00:28 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/03 19:46:10 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Imprime as letras de 'z' a 'a'
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';

	//while letter is more than or equal to 'a'
	while (letter >= 'a')
	{
		//print letter
		write(1, &letter, 1);

		//go to previous letter
		letter--;
	}
}
/* int	main(void)
{
	ft_print_reverse_alphabet();
} */