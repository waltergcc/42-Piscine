/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:49:53 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/03 15:49:56 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

// Displays the content of a file
void	ft_display(int file)
{
	char buffer;
	int	reading;

	// With each loop lap 'reading' receives the char of file and stores it in buffer
	while ((reading = read(file, &buffer, 1)))
	{
		// Print what is in the buffer
		write(1, &buffer, 1);
	}
}

// Displays the content of 1 file or more
void	ft_cat(int argc, char **argv)
{
	int i;
	int file;

	i = 0;

	// If it has less than 2 parameters, Starts a typing mode on Stdout
	if (argc < 2)
		ft_display(0);
	else
		// runs trought all parameters
		while (++i < argc)
		{
			// 'file' keeps the identifier of the open file
			file = open(argv[i], O_RDONLY);

			// If it doesn't find a file with that name, return the error msg
			if (file < 0)
			{
				write(2, "ft_cat: ", 8);
				while (*(argv[i]))
					write(2, (argv[i])++, 1);
				write(2, ": No such file or directory\n", 28);
			}
			else
				// otherwise it shows what is in the file
				ft_display(file);
			close(file);
		}
}

int		main(int argc, char **argv)
{
	ft_cat(argc, argv);
	return 0;
}