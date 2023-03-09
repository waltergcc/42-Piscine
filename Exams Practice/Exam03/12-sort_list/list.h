#ifndef FT_LIST_H
# define FT_LIST_H

// Creates a struct that contains the Data and Next variables
typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

t_list	*ft_create_elem(void *data);

#endif