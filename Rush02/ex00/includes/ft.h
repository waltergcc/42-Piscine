#ifndef FT_H
# define FT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

typedef struct	s_list
{
	int	nbr;
	char	*number_name;
}		t_list;

void	ft_putchar(char c);
char	*ft_strdup(char *src);
void	ft_putstr(char *str);
int	ft_atoi(char *str);
char	*get_nbr(int fd);
char	*get_number_name(int fd, char *c);
t_list	*create_list(char *file);

#endif