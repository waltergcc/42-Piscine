/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 17:20:16 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/03 17:20:19 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		++i;
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum * 10 + str[i] - '0';
		i++;
	}
	return (sum);
}

int		ft_file_size(char *file_name)
{
	int		size;
	char	buffer;
	int		file;

	// Opens the file only for reading
	file = open(file_name, O_RDONLY);
	size = 0;

	// Print this message when it doesn't find the file
	if (file < 0)
	{
		write(2, "ft_tail: ", 9);
		while (*file_name)
			write(2, file_name++, 1);
		write(2, ": No such file or directory\n", 28);
		return -1;
	}
	else
		// While the file does not reach the end 'size' is increased
		while (read(file, &buffer, 1) > 0)
			++size;
	close(file);

	// Returns the size
	return size;
}

void	ft_display(char *file_name, int size, int bytes)
{
	char	buffer;
	int		file;
	int		n;

	n = 0;

	// Opens the file only for reading
	file = open(file_name, O_RDONLY);
	while (read(file, &buffer, 1) > 0)
	{
		// The characters are only printed when 'n' exceeds 'size' - 'bytes'
		if (++n >= size - bytes + 1)
			write(1, &buffer, 1);
	}
	close(file);
}

// Prints a header for each file
void	ft_print_header(int i, char *file_name)
{	if (i == 3)
		write(1, "==> ", 4);
	else
		write(1, "\n==> ", 5);
	while (*file_name)
		write(1, file_name++, 1);
	write(1, " <==\n", 5);
}

int		main(int argc, char **argv)
{
	int		i;
	int		size;
	int		bytes;

	// 'i' starts from the parameter 3
	i = 3;

	// If parameter 2 is equal to '-c' and it has at least 4 parameters
	if (argv[1][0] == '-' && argv[1][1] == 'c' && argc >= 4)
	{
		// converts the parameter 3 into int
		bytes = ft_atoi(argv[2]);
		while (i < argc)
		{
			// If it has more than 1 file, print different headers for each one
			if (argc > 4)
				ft_print_header(i, argv[i]);

			// Count all characters in the file
			size = ft_file_size(argv[i]);

			// Print only the 'n' final bytes of the files
			ft_display(argv[i], size, bytes);
			i++;
		}
	}
	else
		// printed message when the parameters are not in the correct standard
		write(1, "Use: ./ft_tail -c N file1 file2 ...\n", 37);
}