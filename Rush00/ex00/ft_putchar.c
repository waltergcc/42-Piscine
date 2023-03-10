#include <unistd.h>

// Prints the received character 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}