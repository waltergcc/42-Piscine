/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <wcorrea-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:39:55 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/02/20 14:36:57 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

# include <unistd.h>

// Defines a structure
// Structures may contain variables that can be assigned after
typedef struct s_point
{
	int	x;
	int	y;

// t_point is the name for quick call of the s_point structure
}			t_point;

void	set_point(t_point *point);

#endif