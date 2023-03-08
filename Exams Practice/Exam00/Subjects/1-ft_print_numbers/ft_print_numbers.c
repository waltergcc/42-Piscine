#include <unistd.h>

// deliver only the function
void	ft_print_numbers(void)
{
	// Show '0123456789' on the standard output
	write (1, "0123456789", 11);
}
/* 
int	main(void)
{
	ft_print_numbers();
} */
