#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(void)
{
	int	i = 1;

	while (i <= 100)
	{
		// If the number is a multiple of 3 and a multiple of 5
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);

		// If the number is a multiple of 3
		else if (i % 3 == 0)
			write(1, "fizz", 4);

		// If the number is a multiple of 5
		else if (i % 5 == 0)
			write(1, "buzz", 4);

		// If it is none of the other cases prints the number
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}