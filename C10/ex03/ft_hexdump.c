/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcorrea- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 20:20:27 by wcorrea-          #+#    #+#             */
/*   Updated: 2023/03/03 20:20:30 by wcorrea-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

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

char	*ft_copy_input(char *file_name, int size)
{
	char	buffer;
	int		i;
	char	*str;
	int		file;

	buffer = 0;
	i = 0;

    // 'STR' receives memory allocation to the size of the file characters
	str = malloc(size + 1);
	file = open(file_name, O_RDONLY);
	i = 0;

    // While the file doesn't reach the end 'str' receives the char of buffer
	while (read(file, &buffer, 1) > 0)
		str[i++] = buffer;
	str[i] = '\0';
	close(file);
	return (str);
}

void	ft_print_address(int n, int i)
{
	const char *base;

	base = "0123456789abcdef";

    // Print the first digits after the zeros recursively
	if (n / 16 > 0)
		ft_print_address(n / 16, i + 1);

    // prints the first zeros of the address
	else if (i < 8)
		while (++i <= 8)
			write(1, "0", 1);
    // Prints the last digit of the address
	write(1, base + n % 16, 1);
}

void	ft_print_hex(char c, int i, int size)
{
	const char base[16] = "0123456789abcdef";

    // if 'i' is less than 'size' the hexadecimal number is printed
	if (i < size)
	{
		write(1, base + c / 16, 1);
		write(1, base + c % 16, 1);
		write(1, " ", 1);
	}
	else 
        // If 'i' is larger, 3 spaces are printed at a time
		write(1, "   ", 3);

    // every each 8 columns is printed one more space
	if ((i + 1) % 8 == 0)
		write(1, " ", 1);
}

void	ft_print_ascii(char c)
{
    // Print If it's a printable character, otherwise it prints a dot
	if (c >= 32 && c <= 126) 
		write(1, &c, 1);
	else 
		write(1, ".", 1);
}

void	ft_hexdump(char *str, int size)
{
	int		i;
	int		j;

	j = 0;
	while (str[j])
	{
        // This block prints the address in the left column
		ft_print_address(j, 1);
		write(1, "  ", 2);

        // This block prints the 16 central columns
		i = j - 1;
		while (++i < 16 + j)
			ft_print_hex(str[i], i, size);

        // This block prints the characters in the right column
		i = j - 1;
		write(1, "|", 1);
		while (++i < 16 + j && str[i])
			ft_print_ascii(str[i]);
		write(1, "|\n", 2);

        // Go to the next line
		j += 16;
	}
    // Prints the last address of memory
	ft_print_address(j, 1);
	write(1, "\n", 1);

    // free the memory allocated to 'str'
	free(str);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		size;

	i = 0;
	while (++i < argc)
	{
        // If the parameter is not -C, do the conversions
		if (!(*argv[i] == '-' && *(argv[i] + 1) == 'C'))
		{
			// Count all characters in the file
			size = ft_file_size(argv[i]);

            // 'str' receives a copy of argv[i] with memory allocation
			str = ft_copy_input(argv[i], size);

            // 
			ft_hexdump(str, size);
		}
	}
}