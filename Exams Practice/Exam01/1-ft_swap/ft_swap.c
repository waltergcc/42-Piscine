// #include <stdio.h>

// deliver only the function
void	ft_swap(int *a, int *b)
{
	// variable that keeps one of the values temporarily
	int	temp;

	// This instruction exchanges the values to which pointers are pointing
	temp = *a;
	*a = *b;
	*b = temp;
}
/* 
int	main(void)
{
	int	a = 15;
	int	b = 35;
	
	printf("Before ft_swap:\n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);

	// swap the values with each other
	ft_swap(&a, &b);

	printf("\nAfter ft_swap: \n");
	printf("a: %d\n", a);
	printf("b: %d\n", b);
} */