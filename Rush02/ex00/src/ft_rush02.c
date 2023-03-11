#include "ft.h"

char	*get_nbr(int file)
{
	int	i;
	char	buffer[1];
	char	*str;

	// Makes memory allocation to str and check
	str = (char *) malloc(sizeof(char) * 128);
	if (str == NULL)
		return (NULL);

	// Starts the file reading buffer
	read(file, buffer, 1);

	// While Buffer is equal to the new line, Go to the next Char
	while (buffer[0] == '\n')
		read(file, buffer, 1);
	
	i = 0;
	// When they are found digites, 'str' receives them
	while (buffer[0] >= '0' && buffer[0] <= '9')
	{
		str[i] = buffer[0];

		// Go to the next Char
		read(file, buffer, 1);
		i++;
	}
	return (str);
}

char	*get_number_name(int file, char *buffer)
{
	int	i;
	char	*str;

	// Makes memory allocation to str and check
	str = (char *) malloc(sizeof(char) * 128);
	if (str == NULL)
		return (NULL);
	i = 0;

	// While Buffer is different to new line
	// str receives the buffer, and Go to the next Char
	while (buffer[0] != '\n')
	{
		str[i] = buffer[0];
		read(file, buffer, 1);
		i++;
	}
	return (str);
}

t_list	*create_list(char *file_name)
{
	int	i;
	int	file;
	char	buffer[1];
	t_list	*list;
	char *tmp;

	// Opens the file in reading mode
	file = open(file_name, O_RDONLY);

	// Makes memory allocation to list and check
	list = (t_list *)malloc(sizeof(t_list) * 33);
	if (file == -1 || list == NULL)
		return (NULL);
	i = 0;
	while (i < 32)
	{
		// The variable 'nbr' of list receives the int number
		list[i].nbr = ft_atoi(get_nbr(file));

		// Go to the next Char
		read(file, buffer, 1);

		// While it's space, Go to the next Char
		while (buffer[0] == ' ')
			read(file, buffer, 1);

		// If it's two dots, Go to the next Char
		if (buffer[0] == ':')
			read(file, buffer, 1);

		// While it's space, Go to the next Char
		while (buffer[0] == ' ')
			read(file, buffer, 1);

		// temporarily stores the value of the dictionary
		tmp = get_number_name(file, buffer);

		// The variable 'number_name' of list receives a temp copy
		list[i].number_name = ft_strdup(tmp);

		// free Temp Memory
		free(tmp);
		i++;
	}
	// Closes the file
	close(file);

	// Returns the list
	return (list);
}