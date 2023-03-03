/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 12:24:34 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/03 12:24:38 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h> // Contains the Open function

// Displays the content of a file
int	ft_display_file(char *file_name)
{
	int	reading;
	int	file;
	char	buffer;

	// 'file' keeps the identifier of the open file
	// '0' means that it's only for reading
	file = open(file_name, 0);

	// If it doesn't find a file with that name, the return is 0
	if (file == -1)
		return (0);

	// Until it reaches the end of the file
	// With each loop lap 'reading' receives the char of file and stores it in buffer
	while ((reading = read(file, &buffer, 1)))
	{
		// If there is any error in reading, the return is 0
		if (reading == -1)
			return (0);
		
		// Print what is in the buffer
		write (1, &buffer, 1);
	}
	// Closes the file that is open
	close(file);

	// In the end returns 1, which does not display the error message
	return (1);
}

int	main(int argc, char **argv)
{
	// If it has 1 parameter
	if (argc == 2)
	{
		// execute everything that is in the function
		// If the return on the function is 0, displays the message
		if (!ft_display_file(argv[1]))
			write(2, "Cannot read file.\n", 18);
	}
	else
	{
		// If it doesn't have parameters
		if (argc < 2)
			write(2, "File name missing.\n", 19);

		// If it have more than 1 parameter
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
	}
}