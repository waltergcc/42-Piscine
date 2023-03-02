/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 12:14:15 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/21 12:24:23 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// To pass on Norminette the used flags are: -R CheckDefine
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

// Call the library because 'Write' is used in the other file
# include <unistd.h>

// This defines MACROS. Where these macros appear in the code
// The values are replaced by those here
# define SUCCESS	0
# define TRUE	1
# define FALSE	0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"

// This is a MACRO Like a function.
// It works with the variable and operates where it is called
# define EVEN(nbr) (nbr % 2 == 0)

// defines that the name t_bool is the int type
typedef int	t_bool;

// prototype for the .C file functions
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
