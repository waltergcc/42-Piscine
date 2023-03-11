#include "ft.h"

int	get_tens(int nbr)
{
	// Returns the value according to the decimal class
	if (nbr >= 90)
		return (90);
	else if (nbr >= 80)
		return (80);
	else if (nbr >= 70)
		return (70);
	else if (nbr >= 60)
		return (60);
	else if (nbr >= 50)
		return (50);
	else if (nbr >= 40)
		return (40);
	else if (nbr >= 30)
		return (30);
	else if (nbr >= 20)
		return (20);
	else if (nbr <= 20)
		return (nbr);
	else
		return (0);
}

int	get_decimal_classes(int nbr)
{
	// If 1 billion or more, returns the decimal class of 1 billion
	if (nbr >= 1000000000)
		return (1000000000);

	// If 1 million or more, returns the decimal class of 1 million
	else if (nbr >= 1000000)
		return (1000000);

	// If 1 thousand or more, returns the decimal class of 1 thousand
	else if (nbr >= 1000)
		return (1000);

	// If 1 hundred or more, returns the decimal class of 1 hundred
	else if (nbr >= 100)
		return (100);
	
	// If it's less than 1 hundred, returns the tens
	else
		return (get_tens(nbr));
}

void	ft_print(int n, t_list *list, int *first)
{
	int i;
	int decimal_class;

	i = 0;

	// receive the decimal class from the sent number
	decimal_class = get_decimal_classes(n);

	// If it's greater than 100 it calls the function recursively
	if (decimal_class >= 100)
		ft_print(n / decimal_class, list, first);
	
	// From the first time, a space will always be printed between the number names
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;

	// While the list number is different from the decimal class, advances
	while (list[i].nbr != decimal_class)
		i++;

	// Prints the number name
	ft_putstr(list[i].number_name);

	// If 'decimal_class' is different from zero 'and' n module 'decimal_class' too,
	//  it calls the function recursively
	if (decimal_class != 0 && n % decimal_class != 0)
		ft_print(n % decimal_class, list, first);
}

int	main(int ac, char **av)
{
	// Creates a pointer of the Struct type
	t_list *list;
	int first;

	// flag to identify the first time the number is printed
	first = 1;

	// If it has exactly 2 arguments
	if (ac == 2)
	{
		// If the parameter received is a negative number, it returns an error message
		if (ft_atoi(av[1]) < 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		// Creates the list according to the gived file
		list = create_list("dict.txt");
		
		// Prints the number received according to the list
		ft_print(ft_atoi(av[1]), list, &first);
		ft_putchar('\n');
	}
	return (0);
}