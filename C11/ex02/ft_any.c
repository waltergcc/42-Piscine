/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 10:01:51 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/04 10:01:55 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
#include <stdio.h>
#include <stdlib.h>

int ft_comparison(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'A')
            return (1);
        i++;
    }
	return (0);
}*/

// This function receives the pointer of ft_comparison function as a parameter
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
        // Send the current string to be checked by ft_comparison
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}
/* 
int main (void)
{
	char **strs;
	int	i;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * 3);
	strs[0] = "testarray";
	strs[1] = "testarrAy";
	strs[2] = NULL;
	if (ft_any(strs, &ft_comparison))
		printf("The char 'A' was founded\n");
	else
		printf("The char 'A' wasn't founded\n");
    free(strs);
} */